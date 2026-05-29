// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb__Syms.h"
#include "Vregfile_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__0__test_raddr1;
    __Vtask_regfile_tb__DOT__check_read__0__test_raddr1 = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__0__test_raddr2;
    __Vtask_regfile_tb__DOT__check_read__0__test_raddr2 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__0__expected_rdata1;
    __Vtask_regfile_tb__DOT__check_read__0__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__0__expected_rdata2;
    __Vtask_regfile_tb__DOT__check_read__0__expected_rdata2 = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__1__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__1__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__1__addr;
    __Vfunc_regfile_tb__DOT__ref_read__1__addr = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__2__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__2__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__2__addr;
    __Vfunc_regfile_tb__DOT__ref_read__2__addr = 0;
    CData/*0:0*/ __Vtask_regfile_tb__DOT__do_write__3__test_we;
    __Vtask_regfile_tb__DOT__do_write__3__test_we = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__do_write__3__test_waddr;
    __Vtask_regfile_tb__DOT__do_write__3__test_waddr = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__do_write__3__test_wdata;
    __Vtask_regfile_tb__DOT__do_write__3__test_wdata = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__4__test_raddr1;
    __Vtask_regfile_tb__DOT__check_read__4__test_raddr1 = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__4__test_raddr2;
    __Vtask_regfile_tb__DOT__check_read__4__test_raddr2 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__4__expected_rdata1;
    __Vtask_regfile_tb__DOT__check_read__4__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__4__expected_rdata2;
    __Vtask_regfile_tb__DOT__check_read__4__expected_rdata2 = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__5__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__5__addr;
    __Vfunc_regfile_tb__DOT__ref_read__5__addr = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__6__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__6__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__6__addr;
    __Vfunc_regfile_tb__DOT__ref_read__6__addr = 0;
    CData/*0:0*/ __Vtask_regfile_tb__DOT__do_write__7__test_we;
    __Vtask_regfile_tb__DOT__do_write__7__test_we = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__do_write__7__test_waddr;
    __Vtask_regfile_tb__DOT__do_write__7__test_waddr = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__do_write__7__test_wdata;
    __Vtask_regfile_tb__DOT__do_write__7__test_wdata = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__8__test_raddr1;
    __Vtask_regfile_tb__DOT__check_read__8__test_raddr1 = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__8__test_raddr2;
    __Vtask_regfile_tb__DOT__check_read__8__test_raddr2 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__8__expected_rdata1;
    __Vtask_regfile_tb__DOT__check_read__8__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__8__expected_rdata2;
    __Vtask_regfile_tb__DOT__check_read__8__expected_rdata2 = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__9__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__9__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__9__addr;
    __Vfunc_regfile_tb__DOT__ref_read__9__addr = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__10__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__10__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__10__addr;
    __Vfunc_regfile_tb__DOT__ref_read__10__addr = 0;
    CData/*0:0*/ __Vtask_regfile_tb__DOT__do_write__11__test_we;
    __Vtask_regfile_tb__DOT__do_write__11__test_we = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__do_write__11__test_waddr;
    __Vtask_regfile_tb__DOT__do_write__11__test_waddr = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__do_write__11__test_wdata;
    __Vtask_regfile_tb__DOT__do_write__11__test_wdata = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__12__test_raddr1;
    __Vtask_regfile_tb__DOT__check_read__12__test_raddr1 = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__12__test_raddr2;
    __Vtask_regfile_tb__DOT__check_read__12__test_raddr2 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__12__expected_rdata1;
    __Vtask_regfile_tb__DOT__check_read__12__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__12__expected_rdata2;
    __Vtask_regfile_tb__DOT__check_read__12__expected_rdata2 = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__13__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__13__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__13__addr;
    __Vfunc_regfile_tb__DOT__ref_read__13__addr = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__14__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__14__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__14__addr;
    __Vfunc_regfile_tb__DOT__ref_read__14__addr = 0;
    CData/*0:0*/ __Vtask_regfile_tb__DOT__do_write__15__test_we;
    __Vtask_regfile_tb__DOT__do_write__15__test_we = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__do_write__15__test_waddr;
    __Vtask_regfile_tb__DOT__do_write__15__test_waddr = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__do_write__15__test_wdata;
    __Vtask_regfile_tb__DOT__do_write__15__test_wdata = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__16__test_raddr1;
    __Vtask_regfile_tb__DOT__check_read__16__test_raddr1 = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__16__test_raddr2;
    __Vtask_regfile_tb__DOT__check_read__16__test_raddr2 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__16__expected_rdata1;
    __Vtask_regfile_tb__DOT__check_read__16__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__16__expected_rdata2;
    __Vtask_regfile_tb__DOT__check_read__16__expected_rdata2 = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__17__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__17__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__17__addr;
    __Vfunc_regfile_tb__DOT__ref_read__17__addr = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__18__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__18__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__18__addr;
    __Vfunc_regfile_tb__DOT__ref_read__18__addr = 0;
    CData/*0:0*/ __Vtask_regfile_tb__DOT__do_write__19__test_we;
    __Vtask_regfile_tb__DOT__do_write__19__test_we = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__do_write__19__test_waddr;
    __Vtask_regfile_tb__DOT__do_write__19__test_waddr = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__do_write__19__test_wdata;
    __Vtask_regfile_tb__DOT__do_write__19__test_wdata = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__20__test_raddr1;
    __Vtask_regfile_tb__DOT__check_read__20__test_raddr1 = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__20__test_raddr2;
    __Vtask_regfile_tb__DOT__check_read__20__test_raddr2 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__20__expected_rdata1;
    __Vtask_regfile_tb__DOT__check_read__20__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__20__expected_rdata2;
    __Vtask_regfile_tb__DOT__check_read__20__expected_rdata2 = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__21__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__21__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__21__addr;
    __Vfunc_regfile_tb__DOT__ref_read__21__addr = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__22__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__22__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__22__addr;
    __Vfunc_regfile_tb__DOT__ref_read__22__addr = 0;
    CData/*0:0*/ __Vtask_regfile_tb__DOT__do_write__23__test_we;
    __Vtask_regfile_tb__DOT__do_write__23__test_we = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__do_write__23__test_waddr;
    __Vtask_regfile_tb__DOT__do_write__23__test_waddr = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__do_write__23__test_wdata;
    __Vtask_regfile_tb__DOT__do_write__23__test_wdata = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__rand_reg__24__Vfuncout;
    __Vfunc_regfile_tb__DOT__rand_reg__24__Vfuncout = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__25__test_raddr1;
    __Vtask_regfile_tb__DOT__check_read__25__test_raddr1 = 0;
    CData/*4:0*/ __Vtask_regfile_tb__DOT__check_read__25__test_raddr2;
    __Vtask_regfile_tb__DOT__check_read__25__test_raddr2 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__25__expected_rdata1;
    __Vtask_regfile_tb__DOT__check_read__25__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_regfile_tb__DOT__check_read__25__expected_rdata2;
    __Vtask_regfile_tb__DOT__check_read__25__expected_rdata2 = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__rand_reg__26__Vfuncout;
    __Vfunc_regfile_tb__DOT__rand_reg__26__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__rand_reg__27__Vfuncout;
    __Vfunc_regfile_tb__DOT__rand_reg__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__28__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__28__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__28__addr;
    __Vfunc_regfile_tb__DOT__ref_read__28__addr = 0;
    IData/*31:0*/ __Vfunc_regfile_tb__DOT__ref_read__29__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__29__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_regfile_tb__DOT__ref_read__29__addr;
    __Vfunc_regfile_tb__DOT__ref_read__29__addr = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x655f7462U;
    __Vtemp_1[2U] = 0x6766696cU;
    __Vtemp_1[3U] = 0x7265U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->regfile_tb__DOT__num_tests = 0U;
    vlSelf->regfile_tb__DOT__num_fails = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[1U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[2U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[3U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[4U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[5U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[6U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[7U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[8U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[9U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0xaU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0xbU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0xcU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0xdU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0xeU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0xfU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x10U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x11U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x12U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x13U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x14U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x15U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x16U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x17U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x18U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x19U] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x1aU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x1bU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x1cU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x1dU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x1eU] = 0U;
    vlSelf->regfile_tb__DOT__ref_regs[0x1fU] = 0U;
    vlSelf->regfile_tb__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF("Starting register file tests...\n");
    vlSelf->regfile_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__rst_n = 1U;
    __Vtask_regfile_tb__DOT__check_read__0__test_raddr2 = 1U;
    __Vtask_regfile_tb__DOT__check_read__0__test_raddr1 = 0U;
    vlSelf->regfile_tb__DOT__raddr1 = __Vtask_regfile_tb__DOT__check_read__0__test_raddr1;
    vlSelf->regfile_tb__DOT__raddr2 = __Vtask_regfile_tb__DOT__check_read__0__test_raddr2;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_regfile_tb__DOT__ref_read__1__addr = __Vtask_regfile_tb__DOT__check_read__0__test_raddr1;
    __Vfunc_regfile_tb__DOT__ref_read__1__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__1__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__1__addr]);
    __Vtask_regfile_tb__DOT__check_read__0__expected_rdata1 
        = __Vfunc_regfile_tb__DOT__ref_read__1__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__2__addr = __Vtask_regfile_tb__DOT__check_read__0__test_raddr2;
    __Vfunc_regfile_tb__DOT__ref_read__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__2__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__2__addr]);
    __Vtask_regfile_tb__DOT__check_read__0__expected_rdata2 
        = __Vfunc_regfile_tb__DOT__ref_read__2__Vfuncout;
    vlSelf->regfile_tb__DOT__num_tests = ((IData)(1U) 
                                          + vlSelf->regfile_tb__DOT__num_tests);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata1 
                       != __Vtask_regfile_tb__DOT__check_read__0__expected_rdata1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:65: Assertion failed in %Nregfile_tb.check_read: rdata1 mismatch: raddr1=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__0__test_raddr1),
                          32,__Vtask_regfile_tb__DOT__check_read__0__expected_rdata1,
                          32,vlSelf->regfile_tb__DOT__rdata1);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 65, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata2 
                       != __Vtask_regfile_tb__DOT__check_read__0__expected_rdata2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:72: Assertion failed in %Nregfile_tb.check_read: rdata2 mismatch: raddr2=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__0__test_raddr2),
                          32,__Vtask_regfile_tb__DOT__check_read__0__expected_rdata2,
                          32,vlSelf->regfile_tb__DOT__rdata2);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 72, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    __Vtask_regfile_tb__DOT__do_write__3__test_wdata = 0xdeadbeefU;
    __Vtask_regfile_tb__DOT__do_write__3__test_waddr = 1U;
    __Vtask_regfile_tb__DOT__do_write__3__test_we = 1U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = __Vtask_regfile_tb__DOT__do_write__3__test_we;
    vlSelf->regfile_tb__DOT__waddr = __Vtask_regfile_tb__DOT__do_write__3__test_waddr;
    vlSelf->regfile_tb__DOT__wdata = __Vtask_regfile_tb__DOT__do_write__3__test_wdata;
    co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_regfile_tb__DOT__do_write__3__test_we) 
         & (0U != (IData)(__Vtask_regfile_tb__DOT__do_write__3__test_waddr)))) {
        vlSelf->regfile_tb__DOT__ref_regs[__Vtask_regfile_tb__DOT__do_write__3__test_waddr] 
            = __Vtask_regfile_tb__DOT__do_write__3__test_wdata;
    }
    vlSelf->regfile_tb__DOT__ref_regs[0U] = 0U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = 0U;
    __Vtask_regfile_tb__DOT__check_read__4__test_raddr2 = 0U;
    __Vtask_regfile_tb__DOT__check_read__4__test_raddr1 = 1U;
    vlSelf->regfile_tb__DOT__raddr1 = __Vtask_regfile_tb__DOT__check_read__4__test_raddr1;
    vlSelf->regfile_tb__DOT__raddr2 = __Vtask_regfile_tb__DOT__check_read__4__test_raddr2;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_regfile_tb__DOT__ref_read__5__addr = __Vtask_regfile_tb__DOT__check_read__4__test_raddr1;
    __Vfunc_regfile_tb__DOT__ref_read__5__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__5__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__5__addr]);
    __Vtask_regfile_tb__DOT__check_read__4__expected_rdata1 
        = __Vfunc_regfile_tb__DOT__ref_read__5__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__6__addr = __Vtask_regfile_tb__DOT__check_read__4__test_raddr2;
    __Vfunc_regfile_tb__DOT__ref_read__6__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__6__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__6__addr]);
    __Vtask_regfile_tb__DOT__check_read__4__expected_rdata2 
        = __Vfunc_regfile_tb__DOT__ref_read__6__Vfuncout;
    vlSelf->regfile_tb__DOT__num_tests = ((IData)(1U) 
                                          + vlSelf->regfile_tb__DOT__num_tests);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata1 
                       != __Vtask_regfile_tb__DOT__check_read__4__expected_rdata1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:65: Assertion failed in %Nregfile_tb.check_read: rdata1 mismatch: raddr1=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__4__test_raddr1),
                          32,__Vtask_regfile_tb__DOT__check_read__4__expected_rdata1,
                          32,vlSelf->regfile_tb__DOT__rdata1);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 65, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata2 
                       != __Vtask_regfile_tb__DOT__check_read__4__expected_rdata2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:72: Assertion failed in %Nregfile_tb.check_read: rdata2 mismatch: raddr2=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__4__test_raddr2),
                          32,__Vtask_regfile_tb__DOT__check_read__4__expected_rdata2,
                          32,vlSelf->regfile_tb__DOT__rdata2);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 72, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    __Vtask_regfile_tb__DOT__do_write__7__test_wdata = 0xcafebabeU;
    __Vtask_regfile_tb__DOT__do_write__7__test_waddr = 2U;
    __Vtask_regfile_tb__DOT__do_write__7__test_we = 1U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = __Vtask_regfile_tb__DOT__do_write__7__test_we;
    vlSelf->regfile_tb__DOT__waddr = __Vtask_regfile_tb__DOT__do_write__7__test_waddr;
    vlSelf->regfile_tb__DOT__wdata = __Vtask_regfile_tb__DOT__do_write__7__test_wdata;
    co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_regfile_tb__DOT__do_write__7__test_we) 
         & (0U != (IData)(__Vtask_regfile_tb__DOT__do_write__7__test_waddr)))) {
        vlSelf->regfile_tb__DOT__ref_regs[__Vtask_regfile_tb__DOT__do_write__7__test_waddr] 
            = __Vtask_regfile_tb__DOT__do_write__7__test_wdata;
    }
    vlSelf->regfile_tb__DOT__ref_regs[0U] = 0U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = 0U;
    __Vtask_regfile_tb__DOT__check_read__8__test_raddr2 = 2U;
    __Vtask_regfile_tb__DOT__check_read__8__test_raddr1 = 1U;
    vlSelf->regfile_tb__DOT__raddr1 = __Vtask_regfile_tb__DOT__check_read__8__test_raddr1;
    vlSelf->regfile_tb__DOT__raddr2 = __Vtask_regfile_tb__DOT__check_read__8__test_raddr2;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_regfile_tb__DOT__ref_read__9__addr = __Vtask_regfile_tb__DOT__check_read__8__test_raddr1;
    __Vfunc_regfile_tb__DOT__ref_read__9__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__9__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__9__addr]);
    __Vtask_regfile_tb__DOT__check_read__8__expected_rdata1 
        = __Vfunc_regfile_tb__DOT__ref_read__9__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__10__addr = __Vtask_regfile_tb__DOT__check_read__8__test_raddr2;
    __Vfunc_regfile_tb__DOT__ref_read__10__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__10__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__10__addr]);
    __Vtask_regfile_tb__DOT__check_read__8__expected_rdata2 
        = __Vfunc_regfile_tb__DOT__ref_read__10__Vfuncout;
    vlSelf->regfile_tb__DOT__num_tests = ((IData)(1U) 
                                          + vlSelf->regfile_tb__DOT__num_tests);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata1 
                       != __Vtask_regfile_tb__DOT__check_read__8__expected_rdata1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:65: Assertion failed in %Nregfile_tb.check_read: rdata1 mismatch: raddr1=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__8__test_raddr1),
                          32,__Vtask_regfile_tb__DOT__check_read__8__expected_rdata1,
                          32,vlSelf->regfile_tb__DOT__rdata1);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 65, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata2 
                       != __Vtask_regfile_tb__DOT__check_read__8__expected_rdata2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:72: Assertion failed in %Nregfile_tb.check_read: rdata2 mismatch: raddr2=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__8__test_raddr2),
                          32,__Vtask_regfile_tb__DOT__check_read__8__expected_rdata2,
                          32,vlSelf->regfile_tb__DOT__rdata2);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 72, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    __Vtask_regfile_tb__DOT__do_write__11__test_wdata = 0xffffffffU;
    __Vtask_regfile_tb__DOT__do_write__11__test_waddr = 0U;
    __Vtask_regfile_tb__DOT__do_write__11__test_we = 1U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = __Vtask_regfile_tb__DOT__do_write__11__test_we;
    vlSelf->regfile_tb__DOT__waddr = __Vtask_regfile_tb__DOT__do_write__11__test_waddr;
    vlSelf->regfile_tb__DOT__wdata = __Vtask_regfile_tb__DOT__do_write__11__test_wdata;
    co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_regfile_tb__DOT__do_write__11__test_we) 
         & (0U != (IData)(__Vtask_regfile_tb__DOT__do_write__11__test_waddr)))) {
        vlSelf->regfile_tb__DOT__ref_regs[__Vtask_regfile_tb__DOT__do_write__11__test_waddr] 
            = __Vtask_regfile_tb__DOT__do_write__11__test_wdata;
    }
    vlSelf->regfile_tb__DOT__ref_regs[0U] = 0U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = 0U;
    __Vtask_regfile_tb__DOT__check_read__12__test_raddr2 = 1U;
    __Vtask_regfile_tb__DOT__check_read__12__test_raddr1 = 0U;
    vlSelf->regfile_tb__DOT__raddr1 = __Vtask_regfile_tb__DOT__check_read__12__test_raddr1;
    vlSelf->regfile_tb__DOT__raddr2 = __Vtask_regfile_tb__DOT__check_read__12__test_raddr2;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_regfile_tb__DOT__ref_read__13__addr = __Vtask_regfile_tb__DOT__check_read__12__test_raddr1;
    __Vfunc_regfile_tb__DOT__ref_read__13__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__13__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__13__addr]);
    __Vtask_regfile_tb__DOT__check_read__12__expected_rdata1 
        = __Vfunc_regfile_tb__DOT__ref_read__13__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__14__addr = __Vtask_regfile_tb__DOT__check_read__12__test_raddr2;
    __Vfunc_regfile_tb__DOT__ref_read__14__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__14__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__14__addr]);
    __Vtask_regfile_tb__DOT__check_read__12__expected_rdata2 
        = __Vfunc_regfile_tb__DOT__ref_read__14__Vfuncout;
    vlSelf->regfile_tb__DOT__num_tests = ((IData)(1U) 
                                          + vlSelf->regfile_tb__DOT__num_tests);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata1 
                       != __Vtask_regfile_tb__DOT__check_read__12__expected_rdata1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:65: Assertion failed in %Nregfile_tb.check_read: rdata1 mismatch: raddr1=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__12__test_raddr1),
                          32,__Vtask_regfile_tb__DOT__check_read__12__expected_rdata1,
                          32,vlSelf->regfile_tb__DOT__rdata1);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 65, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata2 
                       != __Vtask_regfile_tb__DOT__check_read__12__expected_rdata2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:72: Assertion failed in %Nregfile_tb.check_read: rdata2 mismatch: raddr2=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__12__test_raddr2),
                          32,__Vtask_regfile_tb__DOT__check_read__12__expected_rdata2,
                          32,vlSelf->regfile_tb__DOT__rdata2);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 72, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    __Vtask_regfile_tb__DOT__do_write__15__test_wdata = 0x12345678U;
    __Vtask_regfile_tb__DOT__do_write__15__test_waddr = 3U;
    __Vtask_regfile_tb__DOT__do_write__15__test_we = 0U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = __Vtask_regfile_tb__DOT__do_write__15__test_we;
    vlSelf->regfile_tb__DOT__waddr = __Vtask_regfile_tb__DOT__do_write__15__test_waddr;
    vlSelf->regfile_tb__DOT__wdata = __Vtask_regfile_tb__DOT__do_write__15__test_wdata;
    co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_regfile_tb__DOT__do_write__15__test_we) 
         & (0U != (IData)(__Vtask_regfile_tb__DOT__do_write__15__test_waddr)))) {
        vlSelf->regfile_tb__DOT__ref_regs[__Vtask_regfile_tb__DOT__do_write__15__test_waddr] 
            = __Vtask_regfile_tb__DOT__do_write__15__test_wdata;
    }
    vlSelf->regfile_tb__DOT__ref_regs[0U] = 0U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = 0U;
    __Vtask_regfile_tb__DOT__check_read__16__test_raddr2 = 2U;
    __Vtask_regfile_tb__DOT__check_read__16__test_raddr1 = 3U;
    vlSelf->regfile_tb__DOT__raddr1 = __Vtask_regfile_tb__DOT__check_read__16__test_raddr1;
    vlSelf->regfile_tb__DOT__raddr2 = __Vtask_regfile_tb__DOT__check_read__16__test_raddr2;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_regfile_tb__DOT__ref_read__17__addr = __Vtask_regfile_tb__DOT__check_read__16__test_raddr1;
    __Vfunc_regfile_tb__DOT__ref_read__17__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__17__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__17__addr]);
    __Vtask_regfile_tb__DOT__check_read__16__expected_rdata1 
        = __Vfunc_regfile_tb__DOT__ref_read__17__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__18__addr = __Vtask_regfile_tb__DOT__check_read__16__test_raddr2;
    __Vfunc_regfile_tb__DOT__ref_read__18__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__18__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__18__addr]);
    __Vtask_regfile_tb__DOT__check_read__16__expected_rdata2 
        = __Vfunc_regfile_tb__DOT__ref_read__18__Vfuncout;
    vlSelf->regfile_tb__DOT__num_tests = ((IData)(1U) 
                                          + vlSelf->regfile_tb__DOT__num_tests);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata1 
                       != __Vtask_regfile_tb__DOT__check_read__16__expected_rdata1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:65: Assertion failed in %Nregfile_tb.check_read: rdata1 mismatch: raddr1=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__16__test_raddr1),
                          32,__Vtask_regfile_tb__DOT__check_read__16__expected_rdata1,
                          32,vlSelf->regfile_tb__DOT__rdata1);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 65, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata2 
                       != __Vtask_regfile_tb__DOT__check_read__16__expected_rdata2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:72: Assertion failed in %Nregfile_tb.check_read: rdata2 mismatch: raddr2=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__16__test_raddr2),
                          32,__Vtask_regfile_tb__DOT__check_read__16__expected_rdata2,
                          32,vlSelf->regfile_tb__DOT__rdata2);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 72, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    __Vtask_regfile_tb__DOT__do_write__19__test_wdata = 0x11112222U;
    __Vtask_regfile_tb__DOT__do_write__19__test_waddr = 1U;
    __Vtask_regfile_tb__DOT__do_write__19__test_we = 1U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = __Vtask_regfile_tb__DOT__do_write__19__test_we;
    vlSelf->regfile_tb__DOT__waddr = __Vtask_regfile_tb__DOT__do_write__19__test_waddr;
    vlSelf->regfile_tb__DOT__wdata = __Vtask_regfile_tb__DOT__do_write__19__test_wdata;
    co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((IData)(__Vtask_regfile_tb__DOT__do_write__19__test_we) 
         & (0U != (IData)(__Vtask_regfile_tb__DOT__do_write__19__test_waddr)))) {
        vlSelf->regfile_tb__DOT__ref_regs[__Vtask_regfile_tb__DOT__do_write__19__test_waddr] 
            = __Vtask_regfile_tb__DOT__do_write__19__test_wdata;
    }
    vlSelf->regfile_tb__DOT__ref_regs[0U] = 0U;
    co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regfile_tb.clk)", 
                                                       "../rtl/../tb/regfile_tb.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__we = 0U;
    __Vtask_regfile_tb__DOT__check_read__20__test_raddr2 = 2U;
    __Vtask_regfile_tb__DOT__check_read__20__test_raddr1 = 1U;
    vlSelf->regfile_tb__DOT__raddr1 = __Vtask_regfile_tb__DOT__check_read__20__test_raddr1;
    vlSelf->regfile_tb__DOT__raddr2 = __Vtask_regfile_tb__DOT__check_read__20__test_raddr2;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../rtl/../tb/regfile_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_regfile_tb__DOT__ref_read__21__addr = __Vtask_regfile_tb__DOT__check_read__20__test_raddr1;
    __Vfunc_regfile_tb__DOT__ref_read__21__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__21__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__21__addr]);
    __Vtask_regfile_tb__DOT__check_read__20__expected_rdata1 
        = __Vfunc_regfile_tb__DOT__ref_read__21__Vfuncout;
    __Vfunc_regfile_tb__DOT__ref_read__22__addr = __Vtask_regfile_tb__DOT__check_read__20__test_raddr2;
    __Vfunc_regfile_tb__DOT__ref_read__22__Vfuncout 
        = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__22__addr))
            ? 0U : vlSelf->regfile_tb__DOT__ref_regs
           [__Vfunc_regfile_tb__DOT__ref_read__22__addr]);
    __Vtask_regfile_tb__DOT__check_read__20__expected_rdata2 
        = __Vfunc_regfile_tb__DOT__ref_read__22__Vfuncout;
    vlSelf->regfile_tb__DOT__num_tests = ((IData)(1U) 
                                          + vlSelf->regfile_tb__DOT__num_tests);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata1 
                       != __Vtask_regfile_tb__DOT__check_read__20__expected_rdata1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:65: Assertion failed in %Nregfile_tb.check_read: rdata1 mismatch: raddr1=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__20__test_raddr1),
                          32,__Vtask_regfile_tb__DOT__check_read__20__expected_rdata1,
                          32,vlSelf->regfile_tb__DOT__rdata1);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 65, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata2 
                       != __Vtask_regfile_tb__DOT__check_read__20__expected_rdata2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: regfile_tb.sv:72: Assertion failed in %Nregfile_tb.check_read: rdata2 mismatch: raddr2=%0# expected=%x got=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),5,(IData)(__Vtask_regfile_tb__DOT__check_read__20__test_raddr2),
                          32,__Vtask_regfile_tb__DOT__check_read__20__expected_rdata2,
                          32,vlSelf->regfile_tb__DOT__rdata2);
                VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 72, "");
                vlSelf->regfile_tb__DOT__num_fails 
                    = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
            }
        }
    }
    VL_WRITEF("Starting register file random tests...\n");
    vlSelf->regfile_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1f4U, vlSelf->regfile_tb__DOT__unnamedblk2__DOT__i)) {
        __Vtask_regfile_tb__DOT__do_write__23__test_wdata 
            = VL_RANDOM_I();
        __Vfunc_regfile_tb__DOT__rand_reg__24__Vfuncout 
            = (0x1fU & VL_URANDOM_RANGE_I(0U, 0x1fU));
        __Vtask_regfile_tb__DOT__do_write__23__test_waddr 
            = __Vfunc_regfile_tb__DOT__rand_reg__24__Vfuncout;
        __Vtask_regfile_tb__DOT__do_write__23__test_we 
            = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regfile_tb.clk)", 
                                                           "../rtl/../tb/regfile_tb.sv", 
                                                           83);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->regfile_tb__DOT__we = __Vtask_regfile_tb__DOT__do_write__23__test_we;
        vlSelf->regfile_tb__DOT__waddr = __Vtask_regfile_tb__DOT__do_write__23__test_waddr;
        vlSelf->regfile_tb__DOT__wdata = __Vtask_regfile_tb__DOT__do_write__23__test_wdata;
        co_await vlSelf->__VtrigSched_h93b75e1b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regfile_tb.clk)", 
                                                           "../rtl/../tb/regfile_tb.sv", 
                                                           89);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../rtl/../tb/regfile_tb.sv", 
                                           90);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(__Vtask_regfile_tb__DOT__do_write__23__test_we) 
             & (0U != (IData)(__Vtask_regfile_tb__DOT__do_write__23__test_waddr)))) {
            vlSelf->regfile_tb__DOT__ref_regs[__Vtask_regfile_tb__DOT__do_write__23__test_waddr] 
                = __Vtask_regfile_tb__DOT__do_write__23__test_wdata;
        }
        vlSelf->regfile_tb__DOT__ref_regs[0U] = 0U;
        co_await vlSelf->__VtrigSched_h93b75ede__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regfile_tb.clk)", 
                                                           "../rtl/../tb/regfile_tb.sv", 
                                                           98);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->regfile_tb__DOT__we = 0U;
        __Vfunc_regfile_tb__DOT__rand_reg__26__Vfuncout 
            = (0x1fU & VL_URANDOM_RANGE_I(0U, 0x1fU));
        __Vtask_regfile_tb__DOT__check_read__25__test_raddr2 
            = __Vfunc_regfile_tb__DOT__rand_reg__26__Vfuncout;
        __Vfunc_regfile_tb__DOT__rand_reg__27__Vfuncout 
            = (0x1fU & VL_URANDOM_RANGE_I(0U, 0x1fU));
        __Vtask_regfile_tb__DOT__check_read__25__test_raddr1 
            = __Vfunc_regfile_tb__DOT__rand_reg__27__Vfuncout;
        vlSelf->regfile_tb__DOT__raddr1 = __Vtask_regfile_tb__DOT__check_read__25__test_raddr1;
        vlSelf->regfile_tb__DOT__raddr2 = __Vtask_regfile_tb__DOT__check_read__25__test_raddr2;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../rtl/../tb/regfile_tb.sv", 
                                           56);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vfunc_regfile_tb__DOT__ref_read__28__addr 
            = __Vtask_regfile_tb__DOT__check_read__25__test_raddr1;
        __Vfunc_regfile_tb__DOT__ref_read__28__Vfuncout 
            = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__28__addr))
                ? 0U : vlSelf->regfile_tb__DOT__ref_regs
               [__Vfunc_regfile_tb__DOT__ref_read__28__addr]);
        __Vtask_regfile_tb__DOT__check_read__25__expected_rdata1 
            = __Vfunc_regfile_tb__DOT__ref_read__28__Vfuncout;
        __Vfunc_regfile_tb__DOT__ref_read__29__addr 
            = __Vtask_regfile_tb__DOT__check_read__25__test_raddr2;
        __Vfunc_regfile_tb__DOT__ref_read__29__Vfuncout 
            = ((0U == (IData)(__Vfunc_regfile_tb__DOT__ref_read__29__addr))
                ? 0U : vlSelf->regfile_tb__DOT__ref_regs
               [__Vfunc_regfile_tb__DOT__ref_read__29__addr]);
        __Vtask_regfile_tb__DOT__check_read__25__expected_rdata2 
            = __Vfunc_regfile_tb__DOT__ref_read__29__Vfuncout;
        vlSelf->regfile_tb__DOT__num_tests = ((IData)(1U) 
                                              + vlSelf->regfile_tb__DOT__num_tests);
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata1 
                           != __Vtask_regfile_tb__DOT__check_read__25__expected_rdata1))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: regfile_tb.sv:65: Assertion failed in %Nregfile_tb.check_read: rdata1 mismatch: raddr1=%0# expected=%x got=%x\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),5,
                              (IData)(__Vtask_regfile_tb__DOT__check_read__25__test_raddr1),
                              32,__Vtask_regfile_tb__DOT__check_read__25__expected_rdata1,
                              32,vlSelf->regfile_tb__DOT__rdata1);
                    VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 65, "");
                    vlSelf->regfile_tb__DOT__num_fails 
                        = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((vlSelf->regfile_tb__DOT__rdata2 
                           != __Vtask_regfile_tb__DOT__check_read__25__expected_rdata2))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: regfile_tb.sv:72: Assertion failed in %Nregfile_tb.check_read: rdata2 mismatch: raddr2=%0# expected=%x got=%x\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),5,
                              (IData)(__Vtask_regfile_tb__DOT__check_read__25__test_raddr2),
                              32,__Vtask_regfile_tb__DOT__check_read__25__expected_rdata2,
                              32,vlSelf->regfile_tb__DOT__rdata2);
                    VL_STOP_MT("../rtl/../tb/regfile_tb.sv", 72, "");
                    vlSelf->regfile_tb__DOT__num_fails 
                        = ((IData)(1U) + vlSelf->regfile_tb__DOT__num_fails);
                }
            }
        }
        vlSelf->regfile_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->regfile_tb__DOT__unnamedblk2__DOT__i);
    }
    if ((0U == vlSelf->regfile_tb__DOT__num_fails)) {
        VL_WRITEF("REGFILE TEST PASSED: %0# tests run, %0# failures\n",
                  32,vlSelf->regfile_tb__DOT__num_tests,
                  32,vlSelf->regfile_tb__DOT__num_fails);
    } else {
        VL_WRITEF("REGFILE TEST FAILED: %0# tests run, %0# failures\n",
                  32,vlSelf->regfile_tb__DOT__num_tests,
                  32,vlSelf->regfile_tb__DOT__num_fails);
    }
    VL_FINISH_MT("../rtl/../tb/regfile_tb.sv", 157, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile_tb___024root___eval_triggers__act(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->regfile_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->regfile_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 
        = vlSelf->regfile_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregfile_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vregfile_tb___024root___nba_sequent__TOP__0(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__regfile_tb__DOT__dut__DOT__regs__v0;
    __Vdlyvdim0__regfile_tb__DOT__dut__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__regfile_tb__DOT__dut__DOT__regs__v0;
    __Vdlyvval__regfile_tb__DOT__dut__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v0;
    __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v1;
    __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v1 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v2;
    __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v2 = 0;
    // Body
    if (vlSelf->regfile_tb__DOT__rst_n) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((0U != vlSelf->regfile_tb__DOT__dut__DOT__regs
                           [0U]))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: regfile.sv:54: Assertion failed in %Nregfile_tb.dut: regfile x0 was modified\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name());
                    VL_STOP_MT("../rtl/../rtl/regfile.sv", 54, "");
                }
            }
        }
    }
    __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v0 = 0U;
    __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v1 = 0U;
    __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v2 = 0U;
    if (vlSelf->regfile_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regfile_tb__DOT__we) & 
             (0U != (IData)(vlSelf->regfile_tb__DOT__waddr)))) {
            __Vdlyvval__regfile_tb__DOT__dut__DOT__regs__v0 
                = vlSelf->regfile_tb__DOT__wdata;
            __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v0 = 1U;
            __Vdlyvdim0__regfile_tb__DOT__dut__DOT__regs__v0 
                = vlSelf->regfile_tb__DOT__waddr;
        }
        __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v1 = 1U;
    } else {
        __Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v2 = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->regfile_tb__DOT__rst_n)))) {
        vlSelf->regfile_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (__Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v0) {
        vlSelf->regfile_tb__DOT__dut__DOT__regs[__Vdlyvdim0__regfile_tb__DOT__dut__DOT__regs__v0] 
            = __Vdlyvval__regfile_tb__DOT__dut__DOT__regs__v0;
    }
    if (__Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v1) {
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0U] = 0U;
    }
    if (__Vdlyvset__regfile_tb__DOT__dut__DOT__regs__v2) {
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[1U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[2U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[3U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[4U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[5U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[6U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[7U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[8U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[9U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0xaU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0xbU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0xcU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0xdU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0xeU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0xfU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x10U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x11U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x12U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x13U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x14U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x15U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x16U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x17U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x18U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x19U] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x1aU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x1bU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x1cU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x1dU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x1eU] = 0U;
        vlSelf->regfile_tb__DOT__dut__DOT__regs[0x1fU] = 0U;
    }
}
