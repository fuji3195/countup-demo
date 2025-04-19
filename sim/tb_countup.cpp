#include "Vcountup.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

const int half_period = 500;  // 5 ns

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vcountup* tb = new Vcountup;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    
    tfp->open("waveform.vcd");

    tb->clk = 0;
    tb->rst_n = 0;

    tb->rst_n = 1;
    
    for (int tick=0; tick<20000; ++tick) {
        if (tick%half_period == 0) {
            tb->clk = !tb->clk;
        }
        tb->eval();
        tfp->dump(tick);
    }

    tfp->close();
    delete tb;
    delete tfp;
    return 0;

}