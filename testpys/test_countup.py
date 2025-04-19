import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer


@cocotb.test()
async def test_countup_reset_and_count(dut):
    """
    rst_nをアサートデアサートして、カウントアップを確認
    """
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    
    # 初期化
    dut.rst_n.value = 0
    await Timer(25, units="ns")
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)
    
    # カウンタ動作チェック
    prev = int(dut.count.value)
    for i in range(1,20):
        await RisingEdge(dut.clk)
        curr = int(dut.count.value)
        expected = (prev + 1) & 0xF
        assert curr == expected, f"cycle {i}: count was {curr}, expected {expected}"
        prev = curr