// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile_tb.h for the primary calling header

#ifndef VERILATED_VREGFILE_TB___024ROOT_H_
#define VERILATED_VREGFILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregfile_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregfile_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ regfile_tb__DOT__clk;
    CData/*0:0*/ regfile_tb__DOT__rst_n;
    CData/*0:0*/ regfile_tb__DOT__we;
    CData/*4:0*/ regfile_tb__DOT__waddr;
    CData/*4:0*/ regfile_tb__DOT__raddr1;
    CData/*4:0*/ regfile_tb__DOT__raddr2;
    CData/*0:0*/ __Vdlyvval__regfile_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ regfile_tb__DOT__wdata;
    IData/*31:0*/ regfile_tb__DOT__rdata1;
    IData/*31:0*/ regfile_tb__DOT__rdata2;
    IData/*31:0*/ regfile_tb__DOT__num_tests;
    IData/*31:0*/ regfile_tb__DOT__num_fails;
    IData/*31:0*/ regfile_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ regfile_tb__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> regfile_tb__DOT__ref_regs;
    VlUnpacked<IData/*31:0*/, 32> regfile_tb__DOT__dut__DOT__regs;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h93b75e1b__0;
    VlTriggerScheduler __VtrigSched_h93b75ede__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile_tb___024root(Vregfile_tb__Syms* symsp, const char* v__name);
    ~Vregfile_tb___024root();
    VL_UNCOPYABLE(Vregfile_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
