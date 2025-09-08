// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+68,0,"cyc_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+3,0,"bin_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"bcd_dut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+16,0,"bcd_vld_dut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"bcd_model",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+18,0,"bcd_vld_model",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"rand_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"wait_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("u_bin2bcd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"bin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+3,0,"bin_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"bcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+16,0,"bcd_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"bin_vld_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"bin_abs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+20,0,"bin_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"bin_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+22,0,"abs_sub_1000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+23,0,"res_thousand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+24,0,"bcd_th",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"bin_sign_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"abs_sub_900",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+27,0,"abs_sub_800",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+28,0,"abs_sub_700",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+29,0,"abs_sub_600",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+30,0,"abs_sub_500",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+31,0,"abs_sub_400",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+32,0,"abs_sub_300",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+33,0,"abs_sub_200",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+34,0,"abs_sub_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+35,0,"res_hundred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"bcd_hu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"bin_sign_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"bcd_th_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"abs_sub_90",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"abs_sub_80",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"abs_sub_70",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"abs_sub_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"abs_sub_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"abs_sub_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"abs_sub_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"abs_sub_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+47,0,"abs_sub_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+48,0,"res_ten",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"bcd_ten",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"bin_sign_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"bcd_th_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"bcd_hu_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_bin2bcd_model", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"PIPE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"bin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+3,0,"bin_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"bcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+18,0,"bcd_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"bin2bcd__Vstatic__bin_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"bin2bcd__Vstatic__bin_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+10,0,"bin2bcd__Vstatic__bcd_th",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"bin2bcd__Vstatic__bcd_hu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"bin2bcd__Vstatic__bcd_ten",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"bin2bcd__Vstatic__bcd_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"bcd_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("bcd_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+53+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bin_vld_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+57+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+61,0,"bcd_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+62,0,"bcd_vld_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"bcd_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+64,0,"bcd_vld_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"bcd_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+66,0,"bcd_vld_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+68,(10.0));
    bufp->fullIData(oldp+70,(4U),32);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb__DOT__rstn));
    bufp->fullSData(oldp+2,(vlSelfRef.tb__DOT__bin),11);
    bufp->fullBit(oldp+3,(vlSelfRef.tb__DOT__bin_vld));
    bufp->fullSData(oldp+4,(vlSelfRef.tb__DOT__cnt),16);
    bufp->fullSData(oldp+5,(vlSelfRef.tb__DOT__rand_val),16);
    bufp->fullCData(oldp+6,(vlSelfRef.tb__DOT__wait_cnt),4);
    bufp->fullSData(oldp+7,((0x3ffU & ((0x400U & (IData)(vlSelfRef.tb__DOT__bin))
                                        ? ((IData)(1U) 
                                           + (~ (IData)(vlSelfRef.tb__DOT__bin)))
                                        : (IData)(vlSelfRef.tb__DOT__bin)))),10);
    bufp->fullBit(oldp+8,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_sign));
    bufp->fullSData(oldp+9,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bin_abs),10);
    bufp->fullCData(oldp+10,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_th),4);
    bufp->fullCData(oldp+11,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_hu),4);
    bufp->fullCData(oldp+12,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_ten),4);
    bufp->fullCData(oldp+13,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin2bcd__Vstatic__bcd_last),4);
    bufp->fullIData(oldp+14,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_tmp),17);
    bufp->fullIData(oldp+15,((((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d2) 
                               << 0x10U) | ((((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d1) 
                                              << 0xcU) 
                                             | ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu_d0) 
                                                << 8U)) 
                                            | (((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten))))),17);
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d) 
                                  >> 3U))));
    bufp->fullIData(oldp+17,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                             [3U]),17);
    bufp->fullBit(oldp+18,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                           [3U]));
    bufp->fullCData(oldp+19,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_vld_d),5);
    bufp->fullBit(oldp+20,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign));
    bufp->fullSData(oldp+21,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs),10);
    bufp->fullSData(oldp+22,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_abs) 
                                        - (IData)(0x3e8U)))),11);
    bufp->fullSData(oldp+23,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand),10);
    bufp->fullBit(oldp+24,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th));
    bufp->fullBit(oldp+25,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d0));
    bufp->fullSData(oldp+26,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                        - (IData)(0x384U)))),11);
    bufp->fullSData(oldp+27,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                        - (IData)(0x320U)))),11);
    bufp->fullSData(oldp+28,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                        - (IData)(0x2bcU)))),11);
    bufp->fullSData(oldp+29,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                        - (IData)(0x258U)))),11);
    bufp->fullSData(oldp+30,((0x7ffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand) 
                                        - (IData)(0x1f4U)))),11);
    bufp->fullSData(oldp+31,((0x3ffU & ((0x1ffU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                        - (IData)(0x190U)))),10);
    bufp->fullSData(oldp+32,((0x3ffU & ((0x1ffU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                        - (IData)(0x12cU)))),10);
    bufp->fullSData(oldp+33,((0x3ffU & ((0x1ffU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                        - (IData)(0xc8U)))),10);
    bufp->fullSData(oldp+34,((0x1ffU & ((0xffU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_thousand)) 
                                        - (IData)(0x64U)))),9);
    bufp->fullCData(oldp+35,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred),7);
    bufp->fullCData(oldp+36,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu),4);
    bufp->fullBit(oldp+37,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d1));
    bufp->fullBit(oldp+38,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d0));
    bufp->fullCData(oldp+39,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                       - (IData)(0x5aU)))),8);
    bufp->fullCData(oldp+40,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                       - (IData)(0x50U)))),8);
    bufp->fullCData(oldp+41,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                       - (IData)(0x46U)))),8);
    bufp->fullCData(oldp+42,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                       - (IData)(0x3cU)))),8);
    bufp->fullCData(oldp+43,((0xffU & ((IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred) 
                                       - (IData)(0x32U)))),8);
    bufp->fullCData(oldp+44,((0x7fU & ((0x3fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                       - (IData)(0x28U)))),7);
    bufp->fullCData(oldp+45,((0x7fU & ((0x3fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                       - (IData)(0x1eU)))),7);
    bufp->fullCData(oldp+46,((0x3fU & ((0x1fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                       - (IData)(0x14U)))),6);
    bufp->fullCData(oldp+47,((0x3fU & ((0x1fU & (IData)(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_hundred)) 
                                       - (IData)(0xaU)))),6);
    bufp->fullCData(oldp+48,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__res_ten),4);
    bufp->fullCData(oldp+49,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_ten),4);
    bufp->fullBit(oldp+50,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bin_sign_d2));
    bufp->fullBit(oldp+51,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_th_d1));
    bufp->fullCData(oldp+52,(vlSelfRef.tb__DOT__u_bin2bcd__DOT__bcd_hu_d0),4);
    bufp->fullIData(oldp+53,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[0]),17);
    bufp->fullIData(oldp+54,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[1]),17);
    bufp->fullIData(oldp+55,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[2]),17);
    bufp->fullIData(oldp+56,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe[3]),17);
    bufp->fullBit(oldp+57,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[0]));
    bufp->fullBit(oldp+58,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[1]));
    bufp->fullBit(oldp+59,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[2]));
    bufp->fullBit(oldp+60,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe[3]));
    bufp->fullIData(oldp+61,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                             [0U]),17);
    bufp->fullBit(oldp+62,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                           [0U]));
    bufp->fullIData(oldp+63,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                             [1U]),17);
    bufp->fullBit(oldp+64,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                           [1U]));
    bufp->fullIData(oldp+65,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bcd_pipe
                             [2U]),17);
    bufp->fullBit(oldp+66,(vlSelfRef.tb__DOT__u_bin2bcd_model__DOT__bin_vld_pipe
                           [2U]));
    bufp->fullBit(oldp+67,(vlSelfRef.tb__DOT__clk));
}
