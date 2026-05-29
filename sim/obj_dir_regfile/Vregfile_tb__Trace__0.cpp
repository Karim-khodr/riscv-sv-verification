// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile_tb__Syms.h"


void Vregfile_tb___024root__trace_chg_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregfile_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_chg_0\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregfile_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregfile_tb___024root__trace_chg_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->regfile_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->regfile_tb__DOT__we));
        bufp->chgCData(oldp+2,(vlSelf->regfile_tb__DOT__waddr),5);
        bufp->chgIData(oldp+3,(vlSelf->regfile_tb__DOT__wdata),32);
        bufp->chgCData(oldp+4,(vlSelf->regfile_tb__DOT__raddr1),5);
        bufp->chgCData(oldp+5,(vlSelf->regfile_tb__DOT__raddr2),5);
        bufp->chgIData(oldp+6,(vlSelf->regfile_tb__DOT__ref_regs[0]),32);
        bufp->chgIData(oldp+7,(vlSelf->regfile_tb__DOT__ref_regs[1]),32);
        bufp->chgIData(oldp+8,(vlSelf->regfile_tb__DOT__ref_regs[2]),32);
        bufp->chgIData(oldp+9,(vlSelf->regfile_tb__DOT__ref_regs[3]),32);
        bufp->chgIData(oldp+10,(vlSelf->regfile_tb__DOT__ref_regs[4]),32);
        bufp->chgIData(oldp+11,(vlSelf->regfile_tb__DOT__ref_regs[5]),32);
        bufp->chgIData(oldp+12,(vlSelf->regfile_tb__DOT__ref_regs[6]),32);
        bufp->chgIData(oldp+13,(vlSelf->regfile_tb__DOT__ref_regs[7]),32);
        bufp->chgIData(oldp+14,(vlSelf->regfile_tb__DOT__ref_regs[8]),32);
        bufp->chgIData(oldp+15,(vlSelf->regfile_tb__DOT__ref_regs[9]),32);
        bufp->chgIData(oldp+16,(vlSelf->regfile_tb__DOT__ref_regs[10]),32);
        bufp->chgIData(oldp+17,(vlSelf->regfile_tb__DOT__ref_regs[11]),32);
        bufp->chgIData(oldp+18,(vlSelf->regfile_tb__DOT__ref_regs[12]),32);
        bufp->chgIData(oldp+19,(vlSelf->regfile_tb__DOT__ref_regs[13]),32);
        bufp->chgIData(oldp+20,(vlSelf->regfile_tb__DOT__ref_regs[14]),32);
        bufp->chgIData(oldp+21,(vlSelf->regfile_tb__DOT__ref_regs[15]),32);
        bufp->chgIData(oldp+22,(vlSelf->regfile_tb__DOT__ref_regs[16]),32);
        bufp->chgIData(oldp+23,(vlSelf->regfile_tb__DOT__ref_regs[17]),32);
        bufp->chgIData(oldp+24,(vlSelf->regfile_tb__DOT__ref_regs[18]),32);
        bufp->chgIData(oldp+25,(vlSelf->regfile_tb__DOT__ref_regs[19]),32);
        bufp->chgIData(oldp+26,(vlSelf->regfile_tb__DOT__ref_regs[20]),32);
        bufp->chgIData(oldp+27,(vlSelf->regfile_tb__DOT__ref_regs[21]),32);
        bufp->chgIData(oldp+28,(vlSelf->regfile_tb__DOT__ref_regs[22]),32);
        bufp->chgIData(oldp+29,(vlSelf->regfile_tb__DOT__ref_regs[23]),32);
        bufp->chgIData(oldp+30,(vlSelf->regfile_tb__DOT__ref_regs[24]),32);
        bufp->chgIData(oldp+31,(vlSelf->regfile_tb__DOT__ref_regs[25]),32);
        bufp->chgIData(oldp+32,(vlSelf->regfile_tb__DOT__ref_regs[26]),32);
        bufp->chgIData(oldp+33,(vlSelf->regfile_tb__DOT__ref_regs[27]),32);
        bufp->chgIData(oldp+34,(vlSelf->regfile_tb__DOT__ref_regs[28]),32);
        bufp->chgIData(oldp+35,(vlSelf->regfile_tb__DOT__ref_regs[29]),32);
        bufp->chgIData(oldp+36,(vlSelf->regfile_tb__DOT__ref_regs[30]),32);
        bufp->chgIData(oldp+37,(vlSelf->regfile_tb__DOT__ref_regs[31]),32);
        bufp->chgIData(oldp+38,(vlSelf->regfile_tb__DOT__num_tests),32);
        bufp->chgIData(oldp+39,(vlSelf->regfile_tb__DOT__num_fails),32);
        bufp->chgIData(oldp+40,(vlSelf->regfile_tb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+41,(vlSelf->regfile_tb__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+42,(vlSelf->regfile_tb__DOT__dut__DOT__regs[0]),32);
        bufp->chgIData(oldp+43,(vlSelf->regfile_tb__DOT__dut__DOT__regs[1]),32);
        bufp->chgIData(oldp+44,(vlSelf->regfile_tb__DOT__dut__DOT__regs[2]),32);
        bufp->chgIData(oldp+45,(vlSelf->regfile_tb__DOT__dut__DOT__regs[3]),32);
        bufp->chgIData(oldp+46,(vlSelf->regfile_tb__DOT__dut__DOT__regs[4]),32);
        bufp->chgIData(oldp+47,(vlSelf->regfile_tb__DOT__dut__DOT__regs[5]),32);
        bufp->chgIData(oldp+48,(vlSelf->regfile_tb__DOT__dut__DOT__regs[6]),32);
        bufp->chgIData(oldp+49,(vlSelf->regfile_tb__DOT__dut__DOT__regs[7]),32);
        bufp->chgIData(oldp+50,(vlSelf->regfile_tb__DOT__dut__DOT__regs[8]),32);
        bufp->chgIData(oldp+51,(vlSelf->regfile_tb__DOT__dut__DOT__regs[9]),32);
        bufp->chgIData(oldp+52,(vlSelf->regfile_tb__DOT__dut__DOT__regs[10]),32);
        bufp->chgIData(oldp+53,(vlSelf->regfile_tb__DOT__dut__DOT__regs[11]),32);
        bufp->chgIData(oldp+54,(vlSelf->regfile_tb__DOT__dut__DOT__regs[12]),32);
        bufp->chgIData(oldp+55,(vlSelf->regfile_tb__DOT__dut__DOT__regs[13]),32);
        bufp->chgIData(oldp+56,(vlSelf->regfile_tb__DOT__dut__DOT__regs[14]),32);
        bufp->chgIData(oldp+57,(vlSelf->regfile_tb__DOT__dut__DOT__regs[15]),32);
        bufp->chgIData(oldp+58,(vlSelf->regfile_tb__DOT__dut__DOT__regs[16]),32);
        bufp->chgIData(oldp+59,(vlSelf->regfile_tb__DOT__dut__DOT__regs[17]),32);
        bufp->chgIData(oldp+60,(vlSelf->regfile_tb__DOT__dut__DOT__regs[18]),32);
        bufp->chgIData(oldp+61,(vlSelf->regfile_tb__DOT__dut__DOT__regs[19]),32);
        bufp->chgIData(oldp+62,(vlSelf->regfile_tb__DOT__dut__DOT__regs[20]),32);
        bufp->chgIData(oldp+63,(vlSelf->regfile_tb__DOT__dut__DOT__regs[21]),32);
        bufp->chgIData(oldp+64,(vlSelf->regfile_tb__DOT__dut__DOT__regs[22]),32);
        bufp->chgIData(oldp+65,(vlSelf->regfile_tb__DOT__dut__DOT__regs[23]),32);
        bufp->chgIData(oldp+66,(vlSelf->regfile_tb__DOT__dut__DOT__regs[24]),32);
        bufp->chgIData(oldp+67,(vlSelf->regfile_tb__DOT__dut__DOT__regs[25]),32);
        bufp->chgIData(oldp+68,(vlSelf->regfile_tb__DOT__dut__DOT__regs[26]),32);
        bufp->chgIData(oldp+69,(vlSelf->regfile_tb__DOT__dut__DOT__regs[27]),32);
        bufp->chgIData(oldp+70,(vlSelf->regfile_tb__DOT__dut__DOT__regs[28]),32);
        bufp->chgIData(oldp+71,(vlSelf->regfile_tb__DOT__dut__DOT__regs[29]),32);
        bufp->chgIData(oldp+72,(vlSelf->regfile_tb__DOT__dut__DOT__regs[30]),32);
        bufp->chgIData(oldp+73,(vlSelf->regfile_tb__DOT__dut__DOT__regs[31]),32);
        bufp->chgIData(oldp+74,(vlSelf->regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+75,(vlSelf->regfile_tb__DOT__clk));
    bufp->chgIData(oldp+76,(((0U == (IData)(vlSelf->regfile_tb__DOT__raddr1))
                              ? 0U : vlSelf->regfile_tb__DOT__dut__DOT__regs
                             [vlSelf->regfile_tb__DOT__raddr1])),32);
    bufp->chgIData(oldp+77,(((0U == (IData)(vlSelf->regfile_tb__DOT__raddr2))
                              ? 0U : vlSelf->regfile_tb__DOT__dut__DOT__regs
                             [vlSelf->regfile_tb__DOT__raddr2])),32);
}

void Vregfile_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_cleanup\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
