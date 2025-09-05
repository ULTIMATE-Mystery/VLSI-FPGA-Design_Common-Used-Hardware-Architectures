// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__0 
        = vlSelfRef.__VassignWtmp_h398e054f__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__0 
        = vlSelfRef.__VassignWgen_hd0523f0d__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__0 
        = vlSelfRef.__VassignWtmp_hffd43460__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__0 
        = vlSelfRef.__VassignWgen_hba6284d3__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__0 
        = vlSelfRef.__VassignWtmp_h344de15f__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__0 
        = vlSelfRef.__VassignWgen_hf3ba3946__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__0 
        = vlSelfRef.__VassignWtmp_h8fcfb46d__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__0 
        = vlSelfRef.__VassignWgen_h7e7b869c__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__0 
        = vlSelfRef.__VassignWtmp_h9a784dfc__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__0 
        = vlSelfRef.__VassignWgen_h330652b2__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__0 
        = vlSelfRef.__VassignWtmp_h97790dfc__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__0 
        = vlSelfRef.__VassignWgen_h7cd9d8bf__0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rstn__0 
        = vlSelfRef.tb__DOT__rstn;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__1 
        = vlSelfRef.__VassignWtmp_h398e054f__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__1 
        = vlSelfRef.__VassignWgen_hd0523f0d__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__1 
        = vlSelfRef.__VassignWtmp_hffd43460__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__1 
        = vlSelfRef.__VassignWgen_hba6284d3__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__1 
        = vlSelfRef.__VassignWtmp_h344de15f__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__1 
        = vlSelfRef.__VassignWgen_hf3ba3946__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__1 
        = vlSelfRef.__VassignWtmp_h8fcfb46d__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__1 
        = vlSelfRef.__VassignWgen_h7e7b869c__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__1 
        = vlSelfRef.__VassignWtmp_h9a784dfc__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__1 
        = vlSelfRef.__VassignWgen_h330652b2__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__1 
        = vlSelfRef.__VassignWtmp_h97790dfc__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__1 
        = vlSelfRef.__VassignWgen_h7cd9d8bf__0;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__0__push_rate;
    __Vtask_tb__DOT__give_fifo_op__0__push_rate = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__0__pop_rate;
    __Vtask_tb__DOT__give_fifo_op__0__pop_rate = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__1__push_rate;
    __Vtask_tb__DOT__give_fifo_op__1__push_rate = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__1__pop_rate;
    __Vtask_tb__DOT__give_fifo_op__1__pop_rate = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__2__push_rate;
    __Vtask_tb__DOT__give_fifo_op__2__push_rate = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__2__pop_rate;
    __Vtask_tb__DOT__give_fifo_op__2__pop_rate = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__3__push_rate;
    __Vtask_tb__DOT__give_fifo_op__3__push_rate = 0;
    IData/*31:0*/ __Vtask_tb__DOT__give_fifo_op__3__pop_rate;
    __Vtask_tb__DOT__give_fifo_op__3__pop_rate = 0;
    // Body
    vlSelfRef.tb__DOT__rstn = 0U;
    vlSelfRef.tb__DOT__clk = 0U;
    vlSelfRef.tb__DOT__din = 0xaU;
    vlSelfRef.tb__DOT__pop = 0U;
    vlSelfRef.tb__DOT__push = 0U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__rstn = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__stage = 0U;
    __Vtask_tb__DOT__give_fifo_op__0__pop_rate = 0xc4U;
    __Vtask_tb__DOT__give_fifo_op__0__push_rate = 0xc4U;
    vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt = 0U;
    while (VL_GTS_III(32, 0xc8U, vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt)) {
        co_await vlSelfRef.__VtrigSched_h95cd07b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             45);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__0__push_rate);
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__0__pop_rate);
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_ful_ref)))) {
                vlSelfRef.tb__DOT__push = 1U;
                vlSelfRef.tb__DOT__din = (0xffffU & 
                                          VL_RANDOM_I());
            }
        }
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_empty_ref)))) {
                vlSelfRef.tb__DOT__pop = 1U;
            }
        }
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__pop = 0U;
        vlSelfRef.tb__DOT__push = 0U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt 
            = ((IData)(1U) + vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt);
    }
    tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x64U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = (tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                                                   - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__stage = 1U;
    __Vtask_tb__DOT__give_fifo_op__1__pop_rate = 0xc4U;
    __Vtask_tb__DOT__give_fifo_op__1__push_rate = 0xbdU;
    vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt = 0U;
    while (VL_GTS_III(32, 0xc8U, vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt)) {
        co_await vlSelfRef.__VtrigSched_h95cd07b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             45);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__1__push_rate);
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__1__pop_rate);
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_ful_ref)))) {
                vlSelfRef.tb__DOT__push = 1U;
                vlSelfRef.tb__DOT__din = (0xffffU & 
                                          VL_RANDOM_I());
            }
        }
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_empty_ref)))) {
                vlSelfRef.tb__DOT__pop = 1U;
            }
        }
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__pop = 0U;
        vlSelfRef.tb__DOT__push = 0U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt 
            = ((IData)(1U) + vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt);
    }
    tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x64U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = (tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                                                   - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__stage = 3U;
    __Vtask_tb__DOT__give_fifo_op__2__pop_rate = 0x90U;
    __Vtask_tb__DOT__give_fifo_op__2__push_rate = 0xc4U;
    vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt = 0U;
    while (VL_GTS_III(32, 0xc8U, vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt)) {
        co_await vlSelfRef.__VtrigSched_h95cd07b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             45);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__2__push_rate);
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__2__pop_rate);
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_ful_ref)))) {
                vlSelfRef.tb__DOT__push = 1U;
                vlSelfRef.tb__DOT__din = (0xffffU & 
                                          VL_RANDOM_I());
            }
        }
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_empty_ref)))) {
                vlSelfRef.tb__DOT__pop = 1U;
            }
        }
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__pop = 0U;
        vlSelfRef.tb__DOT__push = 0U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt 
            = ((IData)(1U) + vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt);
    }
    tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x64U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = (tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
                                                   - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         84);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__stage = 4U;
    __Vtask_tb__DOT__give_fifo_op__3__pop_rate = 0x280U;
    __Vtask_tb__DOT__give_fifo_op__3__push_rate = 0x280U;
    vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt = 0U;
    while (VL_GTS_III(32, 0xc8U, vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt)) {
        co_await vlSelfRef.__VtrigSched_h95cd07b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             45);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__3__push_rate);
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1 
            = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), __Vtask_tb__DOT__give_fifo_op__3__pop_rate);
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_ful_ref)))) {
                vlSelfRef.tb__DOT__push = 1U;
                vlSelfRef.tb__DOT__din = (0xffffU & 
                                          VL_RANDOM_I());
            }
        }
        if ((0x7fU >= vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__fifo_empty_ref)))) {
                vlSelfRef.tb__DOT__pop = 1U;
            }
        }
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__pop = 0U;
        vlSelfRef.tb__DOT__push = 0U;
        vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt 
            = ((IData)(1U) + vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt);
    }
    tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x64U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             88);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = (tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
                                                   - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Sim Pass.\n",0);
    VL_FINISH_MT("../pattern/tb.v", 92, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             31);
        vlSelfRef.tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_hd03a799c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk or negedge tb.rstn)", 
                                                             "../pattern/tb.v", 
                                                             124);
        if (vlSelfRef.tb__DOT__rstn) {
            if (VL_UNLIKELY(((((IData)(vlSelfRef.tb__DOT__fifo_ful_buf) 
                               != (IData)(vlSelfRef.tb__DOT__fifo_ful_ref)) 
                              | ((IData)(vlSelfRef.tb__DOT__fifo_empty_buf) 
                                 != (IData)(vlSelfRef.tb__DOT__fifo_empty_ref))) 
                             | ((IData)(vlSelfRef.tb__DOT__pop) 
                                & ((IData)(vlSelfRef.tb__DOT__dout_buf) 
                                   != (IData)(vlSelfRef.tb__DOT__dout_ref)))))) {
                VL_WRITEF_NX("%0t, function of DUT fails.\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -9);
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "../pattern/tb.v", 
                                                                     129);
                co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                                     nullptr, 
                                                     "../pattern/tb.v", 
                                                     129);
                VL_FINISH_MT("../pattern/tb.v", 130, "");
            }
        }
    }
}

void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___act_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___act_sequent__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___act_sequent__TOP__3(Vtb___024root* vlSelf);
void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___act_comb__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___act_comb__TOP__2(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x303ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xc03ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x3003ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__2(vlSelf);
    }
}

VlCoroutine Vtb___024root___act_sequent__TOP__0____Vfork_1__0(Vtb___024root* vlSelf);

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr) 
          == (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr)) 
         != (IData)(vlSelfRef.__VassignWtmp_h398e054f__0))) {
        Vtb___024root___act_sequent__TOP__0____Vfork_1__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___act_sequent__TOP__0____Vfork_1__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0____Vfork_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vintraval_h6d15942c__0;
    __Vintraval_h6d15942c__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_hd0523f0d__0__local;
    __VassignWgen_hd0523f0d__0__local = 0;
    vlSelfRef.__VassignWgen_hd0523f0d__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_hd0523f0d__0);
    __VassignWgen_hd0523f0d__0__local = vlSelfRef.__VassignWgen_hd0523f0d__0;
    __Vintraval_h6d15942c__0 = ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr) 
                                == (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr));
    vlSelfRef.__VassignWtmp_h398e054f__0 = __Vintraval_h6d15942c__0;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         22);
    if ((vlSelfRef.__VassignWgen_hd0523f0d__0 == __VassignWgen_hd0523f0d__0__local)) {
        vlSelfRef.tb__DOT__fifo_empty_buf = __Vintraval_h6d15942c__0;
    }
}

VlCoroutine Vtb___024root___act_sequent__TOP__1____Vfork_2__0(Vtb___024root* vlSelf);

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((((1U & ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr) 
                  >> 3U)) != (1U & ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr) 
                                    >> 3U))) & ((7U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr)) 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr)))) 
         != (IData)(vlSelfRef.__VassignWtmp_hffd43460__0))) {
        Vtb___024root___act_sequent__TOP__1____Vfork_2__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___act_sequent__TOP__1____Vfork_2__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__1____Vfork_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vintraval_h4cc5b051__0;
    __Vintraval_h4cc5b051__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_hba6284d3__0__local;
    __VassignWgen_hba6284d3__0__local = 0;
    vlSelfRef.__VassignWgen_hba6284d3__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_hba6284d3__0);
    __VassignWgen_hba6284d3__0__local = vlSelfRef.__VassignWgen_hba6284d3__0;
    __Vintraval_h4cc5b051__0 = (((1U & ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr) 
                                        >> 3U)) != 
                                 (1U & ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr) 
                                        >> 3U))) & 
                                ((7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr)) 
                                 == (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr))));
    vlSelfRef.__VassignWtmp_hffd43460__0 = __Vintraval_h4cc5b051__0;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         23);
    if ((vlSelfRef.__VassignWgen_hba6284d3__0 == __VassignWgen_hba6284d3__0__local)) {
        vlSelfRef.tb__DOT__fifo_ful_buf = __Vintraval_h4cc5b051__0;
    }
}

VlCoroutine Vtb___024root___act_sequent__TOP__2____Vfork_3__0(Vtb___024root* vlSelf);

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr)))
           ? vlSelfRef.tb__DOT__u_dut__DOT__mem[(7U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr))]
           : 0U) != (IData)(vlSelfRef.__VassignWtmp_h344de15f__0))) {
        Vtb___024root___act_sequent__TOP__2____Vfork_3__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___act_sequent__TOP__2____Vfork_3__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__2____Vfork_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vintraval_hb1fd1490__0;
    __Vintraval_hb1fd1490__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_hf3ba3946__0__local;
    __VassignWgen_hf3ba3946__0__local = 0;
    vlSelfRef.__VassignWgen_hf3ba3946__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_hf3ba3946__0);
    __VassignWgen_hf3ba3946__0__local = vlSelfRef.__VassignWgen_hf3ba3946__0;
    __Vintraval_hb1fd1490__0 = ((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr)))
                                 ? vlSelfRef.tb__DOT__u_dut__DOT__mem
                                [(7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr))]
                                 : 0U);
    vlSelfRef.__VassignWtmp_h344de15f__0 = __Vintraval_hb1fd1490__0;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/tb.v", 
                                         24);
    if ((vlSelfRef.__VassignWgen_hf3ba3946__0 == __VassignWgen_hf3ba3946__0__local)) {
        vlSelfRef.tb__DOT__dout_buf = __Vintraval_hb1fd1490__0;
    }
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__3(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb__DOT__rstn) {
        if (vlSelfRef.tb__DOT__pop) {
            vlSelfRef.tb__DOT__u_model__DOT__rd_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr)));
            if ((6U <= (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr))) {
                vlSelfRef.tb__DOT__u_model__DOT__rd_ptr = 0U;
            }
            vlSelfRef.tb__DOT__u_model__DOT__dnum = 
                (0xfU & ((IData)(vlSelfRef.tb__DOT__u_model__DOT__dnum) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.tb__DOT__push) {
            vlSelfRef.tb__DOT__u_model__DOT____Vlvbound_h5da8fb56__0 
                = vlSelfRef.tb__DOT__din;
            if ((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_model__DOT__wr_ptr)))) {
                vlSelfRef.tb__DOT__u_model__DOT__mem[(7U 
                                                      & (IData)(vlSelfRef.tb__DOT__u_model__DOT__wr_ptr))] 
                    = vlSelfRef.tb__DOT__u_model__DOT____Vlvbound_h5da8fb56__0;
            }
            vlSelfRef.tb__DOT__u_model__DOT__wr_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__u_model__DOT__wr_ptr)));
            if ((6U <= (IData)(vlSelfRef.tb__DOT__u_model__DOT__wr_ptr))) {
                vlSelfRef.tb__DOT__u_model__DOT__wr_ptr = 0U;
            }
            vlSelfRef.tb__DOT__u_model__DOT__dnum = 
                (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__u_model__DOT__dnum)));
        }
    } else {
        vlSelfRef.tb__DOT__u_model__DOT__rd_ptr = 0U;
        vlSelfRef.tb__DOT__u_model__DOT__wr_ptr = 0U;
        vlSelfRef.tb__DOT__u_model__DOT__dnum = 0U;
    }
}

VlCoroutine Vtb___024root___act_comb__TOP__0____Vfork_4__0(Vtb___024root* vlSelf);

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr)))
           ? vlSelfRef.tb__DOT__u_model__DOT__mem[(7U 
                                                   & (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr))]
           : 0U) != (IData)(vlSelfRef.__VassignWtmp_h8fcfb46d__0))) {
        Vtb___024root___act_comb__TOP__0____Vfork_4__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___act_comb__TOP__0____Vfork_4__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0____Vfork_4__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vintraval_hd8ac5061__0;
    __Vintraval_hd8ac5061__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_h7e7b869c__0__local;
    __VassignWgen_h7e7b869c__0__local = 0;
    vlSelfRef.__VassignWgen_h7e7b869c__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_h7e7b869c__0);
    __VassignWgen_h7e7b869c__0__local = vlSelfRef.__VassignWgen_h7e7b869c__0;
    __Vintraval_hd8ac5061__0 = ((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr)))
                                 ? vlSelfRef.tb__DOT__u_model__DOT__mem
                                [(7U & (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr))]
                                 : 0U);
    vlSelfRef.__VassignWtmp_h8fcfb46d__0 = __Vintraval_hd8ac5061__0;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/sync_fifo_model.v", 
                                         45);
    if ((vlSelfRef.__VassignWgen_h7e7b869c__0 == __VassignWgen_h7e7b869c__0__local)) {
        vlSelfRef.tb__DOT__dout_ref = __Vintraval_hd8ac5061__0;
    }
}

VlCoroutine Vtb___024root___act_comb__TOP__1____Vfork_5__0(Vtb___024root* vlSelf);

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((6U == (IData)(vlSelfRef.tb__DOT__u_model__DOT__dnum)) 
         != (IData)(vlSelfRef.__VassignWtmp_h9a784dfc__0))) {
        Vtb___024root___act_comb__TOP__1____Vfork_5__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___act_comb__TOP__1____Vfork_5__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__1____Vfork_5__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vintraval_h9c023965__0;
    __Vintraval_h9c023965__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_h330652b2__0__local;
    __VassignWgen_h330652b2__0__local = 0;
    vlSelfRef.__VassignWgen_h330652b2__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_h330652b2__0);
    __VassignWgen_h330652b2__0__local = vlSelfRef.__VassignWgen_h330652b2__0;
    __Vintraval_h9c023965__0 = (6U == (IData)(vlSelfRef.tb__DOT__u_model__DOT__dnum));
    vlSelfRef.__VassignWtmp_h9a784dfc__0 = __Vintraval_h9c023965__0;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/sync_fifo_model.v", 
                                         73);
    if ((vlSelfRef.__VassignWgen_h330652b2__0 == __VassignWgen_h330652b2__0__local)) {
        vlSelfRef.tb__DOT__fifo_ful_ref = __Vintraval_h9c023965__0;
    }
}

VlCoroutine Vtb___024root___act_comb__TOP__2____Vfork_6__0(Vtb___024root* vlSelf);

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0U == (IData)(vlSelfRef.tb__DOT__u_model__DOT__dnum)) 
         != (IData)(vlSelfRef.__VassignWtmp_h97790dfc__0))) {
        Vtb___024root___act_comb__TOP__2____Vfork_6__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___act_comb__TOP__2____Vfork_6__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__2____Vfork_6__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vintraval_h944e817a__0;
    __Vintraval_h944e817a__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_h7cd9d8bf__0__local;
    __VassignWgen_h7cd9d8bf__0__local = 0;
    vlSelfRef.__VassignWgen_h7cd9d8bf__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_h7cd9d8bf__0);
    __VassignWgen_h7cd9d8bf__0__local = vlSelfRef.__VassignWgen_h7cd9d8bf__0;
    __Vintraval_h944e817a__0 = (0U == (IData)(vlSelfRef.tb__DOT__u_model__DOT__dnum));
    vlSelfRef.__VassignWtmp_h97790dfc__0 = __Vintraval_h944e817a__0;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "../pattern/sync_fifo_model.v", 
                                         74);
    if ((vlSelfRef.__VassignWgen_h7cd9d8bf__0 == __VassignWgen_h7cd9d8bf__0__local)) {
        vlSelfRef.tb__DOT__fifo_empty_ref = __Vintraval_h944e817a__0;
    }
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xc3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x33ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__tb__DOT__u_dut__DOT__rd_ptr;
    __Vdly__tb__DOT__u_dut__DOT__rd_ptr = 0;
    // Body
    vlSelfRef.__Vdly__tb__DOT__u_dut__DOT__wr_ptr = vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr;
    __Vdly__tb__DOT__u_dut__DOT__rd_ptr = vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr;
    if (vlSelfRef.tb__DOT__rstn) {
        if (vlSelfRef.tb__DOT__push) {
            if ((5U == (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr)))) {
                vlSelfRef.__Vdly__tb__DOT__u_dut__DOT__wr_ptr 
                    = (8U & ((~ ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr) 
                                 >> 3U)) << 3U));
            } else {
                vlSelfRef.__Vdly__tb__DOT__u_dut__DOT__wr_ptr 
                    = ((8U & (IData)(vlSelfRef.__Vdly__tb__DOT__u_dut__DOT__wr_ptr)) 
                       | (7U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr))));
            }
        }
        if (vlSelfRef.tb__DOT__pop) {
            if ((5U == (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr)))) {
                __Vdly__tb__DOT__u_dut__DOT__rd_ptr 
                    = (8U & ((~ ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr) 
                                 >> 3U)) << 3U));
            } else {
                __Vdly__tb__DOT__u_dut__DOT__rd_ptr 
                    = ((8U & (IData)(__Vdly__tb__DOT__u_dut__DOT__rd_ptr)) 
                       | (7U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr))));
            }
        }
    } else {
        vlSelfRef.__Vdly__tb__DOT__u_dut__DOT__wr_ptr = 0U;
        __Vdly__tb__DOT__u_dut__DOT__rd_ptr = 0U;
    }
    vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr = __Vdly__tb__DOT__u_dut__DOT__rd_ptr;
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __VdlyVal__tb__DOT__u_dut__DOT__mem__v0;
    __VdlyVal__tb__DOT__u_dut__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__u_dut__DOT__mem__v0;
    __VdlyDim0__tb__DOT__u_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_dut__DOT__mem__v0;
    __VdlySet__tb__DOT__u_dut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__tb__DOT__u_dut__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb__DOT__push) {
        vlSelfRef.tb__DOT__u_dut__DOT____Vlvbound_h37e60f4b__0 
            = vlSelfRef.tb__DOT__din;
        if ((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr)))) {
            __VdlyVal__tb__DOT__u_dut__DOT__mem__v0 
                = vlSelfRef.tb__DOT__u_dut__DOT____Vlvbound_h37e60f4b__0;
            __VdlyDim0__tb__DOT__u_dut__DOT__mem__v0 
                = (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr));
            __VdlySet__tb__DOT__u_dut__DOT__mem__v0 = 1U;
        }
    }
    if (__VdlySet__tb__DOT__u_dut__DOT__mem__v0) {
        vlSelfRef.tb__DOT__u_dut__DOT__mem[__VdlyDim0__tb__DOT__u_dut__DOT__mem__v0] 
            = __VdlyVal__tb__DOT__u_dut__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr = vlSelfRef.__Vdly__tb__DOT__u_dut__DOT__wr_ptr;
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h95cd0708__0.resume(
                                                   "@(posedge tb.clk)");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h95cd07b9__0.resume(
                                                   "@(negedge tb.clk)");
    }
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd03a799c__0.resume(
                                                   "@(posedge tb.clk or negedge tb.rstn)");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h95cd0708__0.commit(
                                                   "@(posedge tb.clk)");
    }
    if ((! (0x8000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h95cd07b9__0.commit(
                                                   "@(negedge tb.clk)");
    }
    if (((! (1ULL & vlSelfRef.__VactTriggered.word(0U))) 
         | (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd03a799c__0.commit(
                                                   "@(posedge tb.clk or negedge tb.rstn)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<16> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../pattern/tb.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../pattern/tb.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
