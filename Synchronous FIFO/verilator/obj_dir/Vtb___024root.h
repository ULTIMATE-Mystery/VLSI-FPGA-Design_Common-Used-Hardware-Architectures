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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__clk;
        CData/*0:0*/ tb__DOT__rstn;
        CData/*0:0*/ tb__DOT__push;
        CData/*0:0*/ tb__DOT__pop;
        CData/*0:0*/ tb__DOT__fifo_empty_ref;
        CData/*0:0*/ tb__DOT__fifo_ful_ref;
        CData/*0:0*/ tb__DOT__fifo_empty_buf;
        CData/*0:0*/ tb__DOT__fifo_ful_buf;
        CData/*3:0*/ tb__DOT__u_dut__DOT__rd_ptr;
        CData/*3:0*/ tb__DOT__u_dut__DOT__wr_ptr;
        CData/*3:0*/ tb__DOT__u_model__DOT__rd_ptr;
        CData/*3:0*/ tb__DOT__u_model__DOT__wr_ptr;
        CData/*3:0*/ tb__DOT__u_model__DOT__dnum;
        CData/*0:0*/ __VassignWtmp_h398e054f__0;
        CData/*0:0*/ __VassignWtmp_hffd43460__0;
        CData/*0:0*/ __VassignWtmp_h9a784dfc__0;
        CData/*0:0*/ __VassignWtmp_h97790dfc__0;
        CData/*3:0*/ __Vdly__tb__DOT__u_dut__DOT__wr_ptr;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rstn__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb__DOT__din;
        SData/*15:0*/ tb__DOT__dout_ref;
        SData/*15:0*/ tb__DOT__dout_buf;
        SData/*15:0*/ tb__DOT__u_dut__DOT____Vlvbound_h37e60f4b__0;
        SData/*15:0*/ tb__DOT__u_model__DOT____Vlvbound_h5da8fb56__0;
        SData/*15:0*/ __VassignWtmp_h344de15f__0;
        SData/*15:0*/ __VassignWtmp_h8fcfb46d__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__1;
        IData/*31:0*/ tb__DOT__stage;
        IData/*31:0*/ tb__DOT__give_fifo_op__Vstatic__rand0;
        IData/*31:0*/ tb__DOT__give_fifo_op__Vstatic__rand1;
        IData/*31:0*/ tb__DOT__give_fifo_op__Vstatic__cnt;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ __VassignWgen_hd0523f0d__0;
        QData/*63:0*/ __VassignWgen_hba6284d3__0;
        QData/*63:0*/ __VassignWgen_hf3ba3946__0;
        QData/*63:0*/ __VassignWgen_h7e7b869c__0;
        QData/*63:0*/ __VassignWgen_h330652b2__0;
        QData/*63:0*/ __VassignWgen_h7cd9d8bf__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__1;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__1;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__1;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__1;
    };
    struct {
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__1;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__1;
        VlUnpacked<SData/*15:0*/, 6> tb__DOT__u_dut__DOT__mem;
        VlUnpacked<SData/*15:0*/, 6> tb__DOT__u_model__DOT__mem;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h95cd0708__0;
    VlTriggerScheduler __VtrigSched_h95cd07b9__0;
    VlTriggerScheduler __VtrigSched_hd03a799c__0;
    VlTriggerVec<13> __VstlTriggered;
    VlTriggerVec<16> __VactTriggered;
    VlTriggerVec<16> __VnbaTriggered;

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
