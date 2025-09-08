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
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rstn__0 
        = vlSelfRef.tb__DOT__rstn;
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
    // Body
    vlSelfRef.tb__DOT__clk = 0U;
    vlSelfRef.tb__DOT__rstn = 0U;
    vlSelfRef.tb__DOT__bin = 0U;
    vlSelfRef.tb__DOT__bin_vld = 0U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "../pattern/tb.v", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__rstn = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "../pattern/tb.v", 
                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__cnt = 0U;
    while ((0x800U > (IData)(vlSelfRef.tb__DOT__cnt))) {
        vlSelfRef.tb__DOT__bin_vld = 1U;
        vlSelfRef.tb__DOT__bin = ((0x400U == (IData)(vlSelfRef.tb__DOT__cnt))
                                   ? 0U : (0x7ffU & (IData)(vlSelfRef.tb__DOT__cnt)));
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             57);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x64ULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             57);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__cnt = (0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb__DOT__cnt)));
    }
    vlSelfRef.tb__DOT__bin_vld = 0U;
    vlSelfRef.tb__DOT__wait_cnt = 0U;
    vlSelfRef.tb__DOT__cnt = 0U;
    while ((0x7ffU > (IData)(vlSelfRef.tb__DOT__cnt))) {
        vlSelfRef.tb__DOT__rand_val = (0xffffU & VL_MODDIVS_III(32, (IData)(
                                                                            VL_RANDOM_I()), (IData)(0x100U)));
        vlSelfRef.tb__DOT__wait_cnt = ((0x80U >= (IData)(vlSelfRef.tb__DOT__rand_val))
                                        ? 0U : ((0xc0U 
                                                 >= (IData)(vlSelfRef.tb__DOT__rand_val))
                                                 ? 1U
                                                 : 
                                                ((0xe0U 
                                                  >= (IData)(vlSelfRef.tb__DOT__rand_val))
                                                  ? 2U
                                                  : 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.tb__DOT__rand_val)))));
        if ((0U != (IData)(vlSelfRef.tb__DOT__wait_cnt))) {
            tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = vlSelfRef.tb__DOT__wait_cnt;
            while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "../pattern/tb.v", 
                                                                     75);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            co_await vlSelfRef.__VdlySched.delay(0x64ULL, 
                                                 nullptr, 
                                                 "../pattern/tb.v", 
                                                 76);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.tb__DOT__bin_vld = 1U;
        vlSelfRef.tb__DOT__bin = ((0x400U == (IData)(vlSelfRef.tb__DOT__cnt))
                                   ? 0U : (0x7ffU & (IData)(vlSelfRef.tb__DOT__cnt)));
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x64ULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__bin_vld = 0U;
        vlSelfRef.tb__DOT__cnt = (0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb__DOT__cnt)));
    }
    vlSelfRef.tb__DOT__cnt = 0U;
    while ((0x7ffU > (IData)(vlSelfRef.tb__DOT__cnt))) {
        vlSelfRef.tb__DOT__rand_val = (0xffffU & VL_MODDIVS_III(32, (IData)(
                                                                            VL_RANDOM_I()), (IData)(0x100U)));
        vlSelfRef.tb__DOT__wait_cnt = (0xfU & ((0x80U 
                                                >= (IData)(vlSelfRef.tb__DOT__rand_val))
                                                ? (IData)(vlSelfRef.tb__DOT__rand_val)
                                                : (
                                                   (0xc0U 
                                                    >= (IData)(vlSelfRef.tb__DOT__rand_val))
                                                    ? 2U
                                                    : 
                                                   ((0xe0U 
                                                     >= (IData)(vlSelfRef.tb__DOT__rand_val))
                                                     ? 1U
                                                     : 0U))));
        if ((0U != (IData)(vlSelfRef.tb__DOT__wait_cnt))) {
            tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = vlSelfRef.tb__DOT__wait_cnt;
            while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "../pattern/tb.v", 
                                                                     102);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                    = (tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                       - (IData)(1U));
            }
            co_await vlSelfRef.__VdlySched.delay(0x64ULL, 
                                                 nullptr, 
                                                 "../pattern/tb.v", 
                                                 103);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.tb__DOT__bin_vld = 1U;
        vlSelfRef.tb__DOT__bin = ((0x400U == (IData)(vlSelfRef.tb__DOT__cnt))
                                   ? 0U : (0x7ffU & (IData)(vlSelfRef.tb__DOT__cnt)));
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "../pattern/tb.v", 
                                                             112);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x64ULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             112);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb__DOT__bin_vld = 0U;
        vlSelfRef.tb__DOT__cnt = (0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb__DOT__cnt)));
    }
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "../pattern/tb.v", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Info: bin2bcd sim pass.\n",0);
    VL_FINISH_MT("../pattern/tb.v", 118, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "../pattern/tb.v", 
                                             30);
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
                                                             148);
        if (vlSelfRef.tb__DOT__rstn) {
            if (vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                [3U]) {
                if (VL_UNLIKELY(((vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                                  [3U] != (1U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d) 
                                                 >> 3U))) 
                                 | (vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                                    [3U] != (((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d2) 
                                              << 0x10U) 
                                             | ((((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d1) 
                                                  << 0xcU) 
                                                 | ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu_d0) 
                                                    << 8U)) 
                                                | (((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten)))))))) {
                    co_await vlSelfRef.__VdlySched.delay(0x64ULL, 
                                                         nullptr, 
                                                         "../pattern/tb.v", 
                                                         153);
                    VL_WRITEF_NX("Info: bin2bcd sim fail.\n",0);
                    VL_FINISH_MT("../pattern/tb.v", 155, "");
                }
            }
        }
    }
}

void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*16:0*/ __Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__Vfuncout;
    __Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__bin;
    __Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__bin = 0;
    // Body
    __Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__bin 
        = vlSelfRef.tb__DOT__bin;
    if ((0x400U & (IData)(__Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__bin))) {
        vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_sign = 1U;
        vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs 
            = (0x3ffU & ((IData)(1U) + (~ (IData)(__Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__bin))));
    } else {
        vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_sign = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs 
            = (0x3ffU & (IData)(__Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__bin));
    }
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_last 
        = (0xfU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs), (IData)(0xaU)));
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs 
        = (0x3ffU & VL_DIV_III(32, (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs), (IData)(0xaU)));
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_ten 
        = (0xfU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs), (IData)(0xaU)));
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs 
        = (0x3ffU & VL_DIV_III(32, (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs), (IData)(0xaU)));
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_hu 
        = (0xfU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs), (IData)(0xaU)));
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs 
        = (0x3ffU & VL_DIV_III(32, (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs), (IData)(0xaU)));
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_th 
        = (0xfU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs), (IData)(0xaU)));
    __Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__Vfuncout 
        = ((((IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_sign) 
             << 0x10U) | (((IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_th) 
                           << 0xcU) | ((IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_hu) 
                                       << 8U))) | (
                                                   ((IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_ten) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_last)));
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_tmp 
        = __Vfunc_tb__DOT__u_bin2bcd_model__DOT__bin2bcd__0__Vfuncout;
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__tb__DOT__u_bin2bcd__DOT__bin_vld_d;
    __Vdly__tb__DOT__u_bin2bcd__DOT__bin_vld_d = 0;
    IData/*16:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v0;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v0;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v0 = 0;
    IData/*16:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v1;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v1;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v2;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v2;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v3;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v3;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v3 = 0;
    // Body
    __Vdly__tb__DOT__u_bin2bcd__DOT__bin_vld_d = vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d;
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v0 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && (IData)(vlSelfRef.tb__DOT__bin_vld));
    if (vlSelfRef.tb__DOT__rstn) {
        __Vdly__tb__DOT__u_bin2bcd__DOT__bin_vld_d 
            = ((0x1eU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d) 
                         << 1U)) | (IData)(vlSelfRef.tb__DOT__bin_vld));
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v1 
            = vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
            [0U];
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v2 
            = vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
            [1U];
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v3 
            = vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
            [2U];
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v0 
            = vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_tmp;
        if ((4U & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d))) {
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d2 
                = vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d1;
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d1 
                = vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d0;
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu_d0 
                = vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu;
            if ((0x80U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                          - (IData)(0x5aU)))) {
                if ((0x80U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                              - (IData)(0x50U)))) {
                    if ((0x80U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                  - (IData)(0x46U)))) {
                        if ((0x80U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                      - (IData)(0x3cU)))) {
                            if ((0x80U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                          - (IData)(0x32U)))) {
                                if ((0x40U & ((0x3fU 
                                               & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                              - (IData)(0x28U)))) {
                                    if ((0x40U & ((0x3fU 
                                                   & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                                  - (IData)(0x1eU)))) {
                                        if ((0x20U 
                                             & ((0x1fU 
                                                 & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                                - (IData)(0x14U)))) {
                                            if ((0x20U 
                                                 & ((0x1fU 
                                                     & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                                    - (IData)(0xaU)))) {
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                                                    = 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred));
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 0U;
                                            } else {
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                                                    = 
                                                    (0xfU 
                                                     & ((0x1fU 
                                                         & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                                        - (IData)(0xaU)));
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                                                = (0xfU 
                                                   & ((0x1fU 
                                                       & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                                      - (IData)(4U)));
                                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 2U;
                                        }
                                    } else {
                                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                                            = (0xfU 
                                               & ((0x3fU 
                                                   & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                                  - (IData)(0xeU)));
                                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 3U;
                                    }
                                } else {
                                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                                        = (0xfU & (
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                                   - (IData)(8U)));
                                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 4U;
                                }
                            } else {
                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                                    = (0xfU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                               - (IData)(2U)));
                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 5U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                                = (0xfU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                           - (IData)(0xcU)));
                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 6U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                            = (0xfU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                       - (IData)(6U)));
                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 7U;
                    }
                } else {
                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                        = (0xfU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred));
                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 8U;
                }
            } else {
                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten 
                    = (0xfU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                               - (IData)(0xaU)));
                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 9U;
            }
        }
        if ((2U & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d))) {
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d1 
                = vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d0;
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d0 
                = vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th;
            if ((0x400U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                           - (IData)(0x384U)))) {
                if ((0x400U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                               - (IData)(0x320U)))) {
                    if ((0x400U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                   - (IData)(0x2bcU)))) {
                        if ((0x400U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                       - (IData)(0x258U)))) {
                            if ((0x400U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                           - (IData)(0x1f4U)))) {
                                if ((0x200U & ((0x1ffU 
                                                & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                               - (IData)(0x190U)))) {
                                    if ((0x200U & (
                                                   (0x1ffU 
                                                    & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                                   - (IData)(0x12cU)))) {
                                        if ((0x200U 
                                             & ((0x1ffU 
                                                 & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                                - (IData)(0xc8U)))) {
                                            if ((0x100U 
                                                 & ((0xffU 
                                                     & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                                    - (IData)(0x64U)))) {
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 0U;
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                                                    = 
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand));
                                            } else {
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 1U;
                                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                                                    = 
                                                    (0x7fU 
                                                     & ((0xffU 
                                                         & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                                        - (IData)(0x64U)));
                                            }
                                        } else {
                                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 2U;
                                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                                                = (0x7fU 
                                                   & ((0x1ffU 
                                                       & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                                      - (IData)(0x48U)));
                                        }
                                    } else {
                                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 3U;
                                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                                            = (0x7fU 
                                               & ((0x1ffU 
                                                   & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                                  - (IData)(0x2cU)));
                                    }
                                } else {
                                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 4U;
                                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                                        = (0x7fU & 
                                           ((0x1ffU 
                                             & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                            - (IData)(0x10U)));
                                }
                            } else {
                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 5U;
                                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                                    = (0x7fU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                                - (IData)(0x74U)));
                            }
                        } else {
                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 6U;
                            vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                                = (0x7fU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                            - (IData)(0x58U)));
                        }
                    } else {
                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 7U;
                        vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                            = (0x7fU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                        - (IData)(0x3cU)));
                    }
                } else {
                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 8U;
                    vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                        = (0x7fU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                    - (IData)(0x20U)));
                }
            } else {
                vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 9U;
                vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred 
                    = (0x7fU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                - (IData)(4U)));
            }
        }
        if ((1U & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d))) {
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d0 
                = vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign;
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th 
                = (1U & (~ (1U & (((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs) 
                                   - (IData)(0x3e8U)) 
                                  >> 0xaU))));
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand 
                = (0x3ffU & ((0x400U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs) 
                                        - (IData)(0x3e8U)))
                              ? (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs)
                              : ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs) 
                                 - (IData)(0x3e8U))));
        }
        if (vlSelfRef.tb__DOT__bin_vld) {
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign 
                = (1U & ((IData)(vlSelfRef.tb__DOT__bin) 
                         >> 0xaU));
            vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs 
                = (0x3ffU & ((0x400U & (IData)(vlSelfRef.tb__DOT__bin))
                              ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb__DOT__bin)))
                              : (IData)(vlSelfRef.tb__DOT__bin)));
        }
    } else {
        __Vdly__tb__DOT__u_bin2bcd__DOT__bin_vld_d = 0U;
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v1 = 0U;
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v2 = 0U;
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v3 = 0U;
        __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v0 = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d2 = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d1 = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu_d0 = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d1 = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d0 = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d0 = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign = 0U;
        vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs = 0U;
    }
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v1 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
           [0U]);
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v2 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
           [1U]);
    __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v3 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
           [2U]);
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[0U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v0;
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[1U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v1;
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[2U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v2;
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[3U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe__v3;
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[0U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v0;
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[1U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v1;
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[2U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v2;
    vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[3U] 
        = __VdlyVal__tb__DOT__u_bin2bcd_model__DOT__bcd_pipe__v3;
    vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d = __Vdly__tb__DOT__u_bin2bcd__DOT__bin_vld_d;
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
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd03a799c__0.resume(
                                                   "@(posedge tb.clk or negedge tb.rstn)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
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
    VlTriggerVec<3> __VpreTriggered;
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
            VL_FATAL_MT("../pattern/tb.v", 13, "", "NBA region did not converge.");
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
                VL_FATAL_MT("../pattern/tb.v", 13, "", "Active region did not converge.");
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
