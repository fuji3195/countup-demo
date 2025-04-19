override SIM := verilator
# cocotbの標準MakefileをInclude
PYTHON := $(shell which python3)
COCOTB := $(shell cocotb-config --makefiles)/Makefile.sim
include $(COCOTB)

EXTRA_ARGS     += --trace --trace-fst --trace-structs

MODULE = test_countup

TOPLEVEL = countup

VERILOG_SOURCES = $(abspath src/countup.v)

export PYTHONPATH := $(PWD)/testpys:$(PYTHONPATH)


.PHONY: all wave

all: sim

wave: sim
	@echo $(SIM)