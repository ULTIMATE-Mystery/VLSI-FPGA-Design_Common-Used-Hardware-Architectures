// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__rstn));
        bufp->chgSData(oldp+1,(vlSelfRef.tb__DOT__bin),11);
        bufp->chgBit(oldp+2,(vlSelfRef.tb__DOT__bin_vld));
        bufp->chgSData(oldp+3,(vlSelfRef.tb__DOT__cnt),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tb__DOT__rand_val),16);
        bufp->chgCData(oldp+5,(vlSelfRef.tb__DOT__wait_cnt),4);
        bufp->chgSData(oldp+6,((0x3ffU & ((0x400U & (IData)(vlSelfRef.tb__DOT__bin))
                                           ? ((IData)(1U) 
                                              + (~ (IData)(vlSelfRef.tb__DOT__bin)))
                                           : (IData)(vlSelfRef.tb__DOT__bin)))),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgBit(oldp+7,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_sign));
        bufp->chgSData(oldp+8,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs),10);
        bufp->chgCData(oldp+9,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_th),4);
        bufp->chgCData(oldp+10,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_hu),4);
        bufp->chgCData(oldp+11,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_ten),4);
        bufp->chgCData(oldp+12,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_last),4);
        bufp->chgIData(oldp+13,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_tmp),17);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+14,((((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d2) 
                                  << 0x10U) | ((((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d1) 
                                                 << 0xcU) 
                                                | ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu_d0) 
                                                   << 8U)) 
                                               | (((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten))))),17);
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d) 
                                     >> 3U))));
        bufp->chgIData(oldp+16,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                                [3U]),17);
        bufp->chgBit(oldp+17,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                              [3U]));
        bufp->chgCData(oldp+18,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d),5);
        bufp->chgBit(oldp+19,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign));
        bufp->chgSData(oldp+20,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs),10);
        bufp->chgSData(oldp+21,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs) 
                                           - (IData)(0x3e8U)))),11);
        bufp->chgSData(oldp+22,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand),10);
        bufp->chgBit(oldp+23,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th));
        bufp->chgBit(oldp+24,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d0));
        bufp->chgSData(oldp+25,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                           - (IData)(0x384U)))),11);
        bufp->chgSData(oldp+26,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                           - (IData)(0x320U)))),11);
        bufp->chgSData(oldp+27,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                           - (IData)(0x2bcU)))),11);
        bufp->chgSData(oldp+28,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                           - (IData)(0x258U)))),11);
        bufp->chgSData(oldp+29,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                           - (IData)(0x1f4U)))),11);
        bufp->chgSData(oldp+30,((0x3ffU & ((0x1ffU 
                                            & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                           - (IData)(0x190U)))),10);
        bufp->chgSData(oldp+31,((0x3ffU & ((0x1ffU 
                                            & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                           - (IData)(0x12cU)))),10);
        bufp->chgSData(oldp+32,((0x3ffU & ((0x1ffU 
                                            & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                           - (IData)(0xc8U)))),10);
        bufp->chgSData(oldp+33,((0x1ffU & ((0xffU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                           - (IData)(0x64U)))),9);
        bufp->chgCData(oldp+34,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred),7);
        bufp->chgCData(oldp+35,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu),4);
        bufp->chgBit(oldp+36,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d1));
        bufp->chgBit(oldp+37,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d0));
        bufp->chgCData(oldp+38,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                          - (IData)(0x5aU)))),8);
        bufp->chgCData(oldp+39,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                          - (IData)(0x50U)))),8);
        bufp->chgCData(oldp+40,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                          - (IData)(0x46U)))),8);
        bufp->chgCData(oldp+41,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                          - (IData)(0x3cU)))),8);
        bufp->chgCData(oldp+42,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                          - (IData)(0x32U)))),8);
        bufp->chgCData(oldp+43,((0x7fU & ((0x3fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                          - (IData)(0x28U)))),7);
        bufp->chgCData(oldp+44,((0x7fU & ((0x3fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                          - (IData)(0x1eU)))),7);
        bufp->chgCData(oldp+45,((0x3fU & ((0x1fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                          - (IData)(0x14U)))),6);
        bufp->chgCData(oldp+46,((0x3fU & ((0x1fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                          - (IData)(0xaU)))),6);
        bufp->chgCData(oldp+47,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten),4);
        bufp->chgCData(oldp+48,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten),4);
        bufp->chgBit(oldp+49,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d2));
        bufp->chgBit(oldp+50,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d1));
        bufp->chgCData(oldp+51,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu_d0),4);
        bufp->chgIData(oldp+52,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[0]),17);
        bufp->chgIData(oldp+53,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[1]),17);
        bufp->chgIData(oldp+54,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[2]),17);
        bufp->chgIData(oldp+55,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[3]),17);
        bufp->chgBit(oldp+56,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[0]));
        bufp->chgBit(oldp+57,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[1]));
        bufp->chgBit(oldp+58,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[2]));
        bufp->chgBit(oldp+59,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[3]));
        bufp->chgIData(oldp+60,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                                [0U]),17);
        bufp->chgBit(oldp+61,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                              [0U]));
        bufp->chgIData(oldp+62,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                                [1U]),17);
        bufp->chgBit(oldp+63,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                              [1U]));
        bufp->chgIData(oldp+64,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                                [2U]),17);
        bufp->chgBit(oldp+65,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                              [2U]));
    }
    bufp->chgBit(oldp+66,(vlSelfRef.tb__DOT__clk));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
