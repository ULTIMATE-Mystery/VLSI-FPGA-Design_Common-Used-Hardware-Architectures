// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.__VassignWtmp_h398e054f__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h398e054f__0__0)));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.__VassignWgen_hd0523f0d__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hd0523f0d__0__0));
    vlSelfRef.__VstlTriggered.set(3U, ((IData)(vlSelfRef.__VassignWtmp_hffd43460__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hffd43460__0__0)));
    vlSelfRef.__VstlTriggered.set(4U, (vlSelfRef.__VassignWgen_hba6284d3__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hba6284d3__0__0));
    vlSelfRef.__VstlTriggered.set(5U, ((IData)(vlSelfRef.__VassignWtmp_h344de15f__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h344de15f__0__0)));
    vlSelfRef.__VstlTriggered.set(6U, (vlSelfRef.__VassignWgen_hf3ba3946__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hf3ba3946__0__0));
    vlSelfRef.__VstlTriggered.set(7U, ((IData)(vlSelfRef.__VassignWtmp_h8fcfb46d__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h8fcfb46d__0__0)));
    vlSelfRef.__VstlTriggered.set(8U, (vlSelfRef.__VassignWgen_h7e7b869c__0 
                                       != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7e7b869c__0__0));
    vlSelfRef.__VstlTriggered.set(9U, ((IData)(vlSelfRef.__VassignWtmp_h9a784dfc__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9a784dfc__0__0)));
    vlSelfRef.__VstlTriggered.set(0xaU, (vlSelfRef.__VassignWgen_h330652b2__0 
                                         != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h330652b2__0__0));
    vlSelfRef.__VstlTriggered.set(0xbU, ((IData)(vlSelfRef.__VassignWtmp_h97790dfc__0) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h97790dfc__0__0)));
    vlSelfRef.__VstlTriggered.set(0xcU, (vlSelfRef.__VassignWgen_h7cd9d8bf__0 
                                         != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h7cd9d8bf__0__0));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
        vlSelfRef.__VstlTriggered.set(6U, 1U);
        vlSelfRef.__VstlTriggered.set(7U, 1U);
        vlSelfRef.__VstlTriggered.set(8U, 1U);
        vlSelfRef.__VstlTriggered.set(9U, 1U);
        vlSelfRef.__VstlTriggered.set(0xaU, 1U);
        vlSelfRef.__VstlTriggered.set(0xbU, 1U);
        vlSelfRef.__VstlTriggered.set(0xcU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
