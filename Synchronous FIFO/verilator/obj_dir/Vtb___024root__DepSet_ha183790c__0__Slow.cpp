// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../pattern/tb.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] __VassignWtmp_h398e054f__0)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] __VassignWgen_hd0523f0d__0)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] __VassignWtmp_hffd43460__0)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] __VassignWgen_hba6284d3__0)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] __VassignWtmp_h344de15f__0)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] __VassignWgen_hf3ba3946__0)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] __VassignWtmp_h8fcfb46d__0)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] __VassignWgen_h7e7b869c__0)\n");
    }
    if ((0x200ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] __VassignWtmp_h9a784dfc__0)\n");
    }
    if ((0x400ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] __VassignWgen_h330652b2__0)\n");
    }
    if ((0x800ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] __VassignWtmp_h97790dfc__0)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] __VassignWgen_h7cd9d8bf__0)\n");
    }
}
#endif  // VL_DEBUG

void Vtb___024root___act_comb__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___act_comb__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___act_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___act_sequent__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x601ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x1801ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x19ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x61ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x181ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] __VassignWtmp_h398e054f__0)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] __VassignWgen_hd0523f0d__0)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] __VassignWtmp_hffd43460__0)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] __VassignWgen_hba6284d3__0)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] __VassignWtmp_h344de15f__0)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] __VassignWgen_hf3ba3946__0)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] __VassignWtmp_h8fcfb46d__0)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] __VassignWgen_h7e7b869c__0)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] __VassignWtmp_h9a784dfc__0)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] __VassignWgen_h330652b2__0)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] __VassignWtmp_h97790dfc__0)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] __VassignWgen_h7cd9d8bf__0)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(negedge tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] __VassignWtmp_h398e054f__0)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] __VassignWgen_hd0523f0d__0)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] __VassignWtmp_hffd43460__0)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] __VassignWgen_hba6284d3__0)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] __VassignWtmp_h344de15f__0)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] __VassignWgen_hf3ba3946__0)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] __VassignWtmp_h8fcfb46d__0)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] __VassignWgen_h7e7b869c__0)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] __VassignWtmp_h9a784dfc__0)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] __VassignWgen_h330652b2__0)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] __VassignWtmp_h97790dfc__0)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] __VassignWgen_h7cd9d8bf__0)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(negedge tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__din = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dout_ref = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dout_buf = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__fifo_empty_ref = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__fifo_ful_ref = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__fifo_empty_buf = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__fifo_ful_buf = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__stage = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__give_fifo_op__Vstatic__rand0 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__give_fifo_op__Vstatic__rand1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__give_fifo_op__Vstatic__cnt = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb__DOT__u_dut__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__u_dut__DOT__rd_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_dut__DOT__wr_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_dut__DOT____Vlvbound_h37e60f4b__0 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb__DOT__u_model__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__u_model__DOT__rd_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_model__DOT__wr_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_model__DOT__dnum = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_model__DOT____Vlvbound_h5da8fb56__0 = VL_RAND_RESET_I(16);
    vlSelf->__VassignWgen_hd0523f0d__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VassignWtmp_h398e054f__0 = VL_RAND_RESET_I(1);
    vlSelf->__VassignWgen_hba6284d3__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VassignWtmp_hffd43460__0 = VL_RAND_RESET_I(1);
    vlSelf->__VassignWgen_hf3ba3946__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VassignWtmp_h344de15f__0 = VL_RAND_RESET_I(16);
    vlSelf->__VassignWgen_h7e7b869c__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VassignWtmp_h8fcfb46d__0 = VL_RAND_RESET_I(16);
    vlSelf->__VassignWgen_h330652b2__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VassignWtmp_h9a784dfc__0 = VL_RAND_RESET_I(1);
    vlSelf->__VassignWgen_h7cd9d8bf__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VassignWtmp_h97790dfc__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb__DOT__u_dut__DOT__wr_ptr = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rstn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__1 = VL_RAND_RESET_Q(64);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
