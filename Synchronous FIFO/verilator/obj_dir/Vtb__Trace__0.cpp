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
        bufp->chgSData(oldp+1,(vlSelfRef.tb__DOT__din),16);
        bufp->chgBit(oldp+2,(vlSelfRef.tb__DOT__push));
        bufp->chgBit(oldp+3,(vlSelfRef.tb__DOT__pop));
        bufp->chgIData(oldp+4,(vlSelfRef.tb__DOT__stage),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand0),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb__DOT__give_fifo_op__Vstatic__rand1),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb__DOT__give_fifo_op__Vstatic__cnt),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+8,(vlSelfRef.tb__DOT__u_model__DOT__mem[0]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.tb__DOT__u_model__DOT__mem[1]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.tb__DOT__u_model__DOT__mem[2]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.tb__DOT__u_model__DOT__mem[3]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.tb__DOT__u_model__DOT__mem[4]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.tb__DOT__u_model__DOT__mem[5]),16);
        bufp->chgCData(oldp+14,(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr),4);
        bufp->chgCData(oldp+15,(vlSelfRef.tb__DOT__u_model__DOT__wr_ptr),4);
        bufp->chgCData(oldp+16,(vlSelfRef.tb__DOT__u_model__DOT__dnum),4);
        bufp->chgSData(oldp+17,(((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr)))
                                  ? vlSelfRef.tb__DOT__u_model__DOT__mem
                                 [(7U & (IData)(vlSelfRef.tb__DOT__u_model__DOT__rd_ptr))]
                                  : 0U)),16);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+18,(vlSelfRef.tb__DOT__u_dut__DOT__mem[0]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.tb__DOT__u_dut__DOT__mem[1]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.tb__DOT__u_dut__DOT__mem[2]),16);
        bufp->chgSData(oldp+21,(vlSelfRef.tb__DOT__u_dut__DOT__mem[3]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.tb__DOT__u_dut__DOT__mem[4]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.tb__DOT__u_dut__DOT__mem[5]),16);
    }
    bufp->chgBit(oldp+24,(vlSelfRef.tb__DOT__clk));
    bufp->chgSData(oldp+25,(vlSelfRef.tb__DOT__dout_ref),16);
    bufp->chgSData(oldp+26,(((5U >= (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr)))
                              ? vlSelfRef.tb__DOT__u_dut__DOT__mem
                             [(7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr))]
                              : 0U)),16);
    bufp->chgSData(oldp+27,(vlSelfRef.tb__DOT__dout_buf),16);
    bufp->chgBit(oldp+28,(((IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr) 
                           == (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr))));
    bufp->chgBit(oldp+29,(vlSelfRef.tb__DOT__fifo_empty_ref));
    bufp->chgBit(oldp+30,((((1U & ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr) 
                                   >> 3U)) != (1U & 
                                               ((IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr) 
                                                >> 3U))) 
                           & ((7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr)) 
                              == (7U & (IData)(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr))))));
    bufp->chgBit(oldp+31,(vlSelfRef.tb__DOT__fifo_ful_ref));
    bufp->chgBit(oldp+32,(vlSelfRef.tb__DOT__fifo_empty_buf));
    bufp->chgBit(oldp+33,(vlSelfRef.tb__DOT__fifo_ful_buf));
    bufp->chgCData(oldp+34,(vlSelfRef.tb__DOT__u_dut__DOT__rd_ptr),4);
    bufp->chgCData(oldp+35,(vlSelfRef.tb__DOT__u_dut__DOT__wr_ptr),4);
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
}
