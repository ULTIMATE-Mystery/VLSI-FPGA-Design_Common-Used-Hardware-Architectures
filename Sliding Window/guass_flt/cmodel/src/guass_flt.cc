//-----------------------------------------------------------------------//
// Function: Guide filter test.
// 1: test the variance calculation function.
//
//
//----------------------------------------------------------------------//

#include "stdio.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

#include "base_type.h"

#define	YUV_422
#define BLK_DEBUG 1
#define MAX_FRAME_SIZE 2048


int main (int argc, char *argv[]) {

u8      image_line[MAX_FRAME_SIZE];
u8      image[MAX_FRAME_SIZE][MAX_FRAME_SIZE];
u8      ofrm[MAX_FRAME_SIZE][MAX_FRAME_SIZE];       //filtered frame
u32		frm_num		;
u32		frm_width	;
u32		frm_height	;
u32		frm_cnt		;
u8		flt_par[5][5] = {{2,4,5,4,2}, {4,9,12,9,4}, {5,12,15,12,5}, {4,9,12,9,4}, {2,4,5,4,2}};


ifstream	in_pic		;
ofstream	out_pic		;
char		file_name	[128+4+16];

u16     x,y;
i16     j,k;
i16     xloc, yloc;
u16     max_x, max_y;
u32		sum;
u32     tmp;
u8		flt_out;
u8      org_pixel;


frm_num		= atoi(argv[2]);
frm_width	= atoi(argv[3]);
frm_height	= atoi(argv[4]);

strcpy(file_name, argv[1]);
in_pic.open(file_name, ios::in|ios::binary);
if(in_pic == NULL) {
	cout << "Can't open file " << file_name << ".\n";	
	return(1);
}

#ifdef YUV_422
out_pic.open("../../image/flt_1920x1080_422.yuv", ios::out|ios::binary);
#else
out_pic.open("../../image/flt_1920x1080_420.yuv", ios::out|ios::binary);
#endif
if(out_pic == NULL) {
	cout << "Can't open file output picture file" << ".\n";	
	return(1);
}

if((frm_width > MAX_FRAME_SIZE) || (frm_height > MAX_FRAME_SIZE)) {
    cout << "Error: Input frame size error.\n";
    in_pic.close();
    out_pic.close();
    return(1);
}

//--- loop each frame ---//
for(frm_cnt = 0; frm_cnt < frm_num; frm_cnt++) {
    cout << "---- Begin guide filter of frame: " << frm_cnt << ".\n";
    //--- read in Luma part ---//
    for(y=0; y<frm_height;y++)
        in_pic.read((char *) &image[y], sizeof(u8)*frm_width);

	//--- flt each pixel
	for(y=0; y<frm_height; y++) {
		for(x=0; x<frm_width; x++) {
			if((y<2) || ((y+2)>=frm_height) || (x<2) || ((x+2)>=frm_width)) {
				flt_out = image[y][x];
			} else {
				sum = 0;
				for(j=-2; j<=2; j++) {
					for(k=-2; k<=2; k++) {
						sum += image[y+j][x+k] * flt_par[j+2][k+2];
					}
				}
				
				sum = sum * 103;	//change 1/159 to 103/(1<<14)
				flt_out = sum >> 14;
			}
			
			ofrm[y][x] = flt_out;
		}	
	}
    
    if(BLK_DEBUG) {

    }


    //--- print out the filted Luma part
    for(y=0; y<frm_height; y++) {
        out_pic.write((char *) &ofrm[y], sizeof(u8)*frm_width);
    }

    //-- bypass UV
    for(tmp=0; tmp<2; tmp++) {
    	#ifdef YUV_422
    	for(y=0; y<frm_height; y++) {
    	#else
        for(y=0; y<(frm_height/2); y++) {
        #endif
            in_pic.read((char *) image_line, sizeof(u8)*(frm_width/2));
            out_pic.write((char *) image_line, sizeof(u8)*(frm_width/2));
        }
    }
}   //end //--- loop each frame ---//

in_pic.close();
out_pic.close();
return(0);

}

