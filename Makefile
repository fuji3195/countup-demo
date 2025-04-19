# cocotbの標準MakefileをInclude
PYTHON := $(shell which python3)
COCOTB := $(shell cocotb-config --makefiles)/Makefile.sim
include $(COCOTB)

MODULE = test_countup

TOPLEVEL = countup

VERILOG_SOURCES = $(abspath src/countup.v)

SIM ?= verilator

export PYTHONPATH := $(PWD)/testpys:$(PYTHONPATH)

.PHONY: all wave

all: sim

wave:
	$(MAKE) SIM=$(SIM) WAVES=1