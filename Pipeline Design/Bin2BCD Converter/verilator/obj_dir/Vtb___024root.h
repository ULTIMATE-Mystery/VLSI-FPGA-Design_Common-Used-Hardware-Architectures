// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rstn;
    CData/*0:0*/ tb__DOT__bin_vld;
    CData/*3:0*/ tb__DOT__wait_cnt;
    CData/*0:0*/ tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_sign;
    CData/*3:0*/ tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_th;
    CData/*3:0*/ tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_hu;
    CData/*3:0*/ tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_ten;
    CData/*3:0*/ tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_last;
    CData/*4:0*/ tb__DOT__u_bin2bcd__DOT__bin_vld_d;
    CData/*0:0*/ tb__DOT__u_bin2bcd__DOT__bin_sign;
    CData/*0:0*/ tb__DOT__u_bin2bcd__DOT__bcd_th;
    CData/*0:0*/ tb__DOT__u_bin2bcd__DOT__bin_sign_d0;
    CData/*6:0*/ tb__DOT__u_bin2bcd__DOT__res_hundred;
    CData/*3:0*/ tb__DOT__u_bin2bcd__DOT__bcd_hu;
    CData/*0:0*/ tb__DOT__u_bin2bcd__DOT__bin_sign_d1;
    CData/*0:0*/ tb__DOT__u_bin2bcd__DOT__bcd_th_d0;
    CData/*3:0*/ tb__DOT__u_bin2bcd__DOT__res_ten;
    CData/*3:0*/ tb__DOT__u_bin2bcd__DOT__bcd_ten;
    CData/*0:0*/ tb__DOT__u_bin2bcd__DOT__bin_sign_d2;
    CData/*0:0*/ tb__DOT__u_bin2bcd__DOT__bcd_th_d1;
    CData/*3:0*/ tb__DOT__u_bin2bcd__DOT__bcd_hu_d0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rstn__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ tb__DOT__bin;
    SData/*15:0*/ tb__DOT__cnt;
    SData/*15:0*/ tb__DOT__rand_val;
    SData/*9:0*/ tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs;
    SData/*9:0*/ tb__DOT__u_bin2bcd__DOT__bin_abs;
    SData/*9:0*/ tb__DOT__u_bin2bcd__DOT__res_thousand;
    IData/*16:0*/ tb__DOT__u_bin2bcd_model__DOT__bcd_tmp;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*16:0*/, 4> tb__DOT__u_bin2bcd_model__DOT__bcd_pipe;
    VlUnpacked<CData/*0:0*/, 4> tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h95cd0708__0;
    VlTriggerScheduler __VtrigSched_hd03a799c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
