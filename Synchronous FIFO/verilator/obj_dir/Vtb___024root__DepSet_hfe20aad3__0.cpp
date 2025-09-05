// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb__DOT__rstn)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rstn__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.__VassignWtmp_h398e054f__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__1)));
    vlSelfRef.__VactTriggered.set(3U, (vlSelfRef.__VassignWgen_hd0523f0d__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__1));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.__VassignWtmp_hffd43460__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__1)));
    vlSelfRef.__VactTriggered.set(5U, (vlSelfRef.__VassignWgen_hba6284d3__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__1));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.__VassignWtmp_h344de15f__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__1)));
    vlSelfRef.__VactTriggered.set(7U, (vlSelfRef.__VassignWgen_hf3ba3946__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__1));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.__VassignWtmp_h8fcfb46d__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__1)));
    vlSelfRef.__VactTriggered.set(9U, (vlSelfRef.__VassignWgen_h7e7b869c__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__1));
    vlSelfRef.__VactTriggered.set(0xaU, ((IData)(vlSelfRef.__VassignWtmp_h9a784dfc__0) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__1)));
    vlSelfRef.__VactTriggered.set(0xbU, (vlSelfRef.__VassignWgen_h330652b2__0 
                                         != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__1));
    vlSelfRef.__VactTriggered.set(0xcU, ((IData)(vlSelfRef.__VassignWtmp_h97790dfc__0) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__1)));
    vlSelfRef.__VactTriggered.set(0xdU, (vlSelfRef.__VassignWgen_h7cd9d8bf__0 
                                         != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__1));
    vlSelfRef.__VactTriggered.set(0xeU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(0xfU, ((~ (IData)(vlSelfRef.tb__DOT__clk)) 
                                         & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0)));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xbU, 1U);
        vlSelfRef.__VactTriggered.set(0xcU, 1U);
        vlSelfRef.__VactTriggered.set(0xdU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
