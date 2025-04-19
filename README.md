
# Countup demo
単純なカウントアッププログラムをCocotbでSimulationします。
Verilator + C++の環境も混じっていますが、気にせず使えます。

## レポジトリの構成
```
.
├── Makefile
├── Makefile.mk
├── REAME.md
├── sim
│   └── tb_countup.cpp
├── src
│   └── countup.v
├── testpys
│   ├── __pycache__
│   │   └── test_countup.cpython-313.pyc
│   └── test_countup.py
└── waveform.vcd
```

## 環境(Prerequisies)
Ubuntu 20.04+ (WSL or native)
Python 3.13.3 (pyenv + venv)
Verilator
Cocotb python package
GTK Wave

## Setup
clone repo
```
git clone git@github.com:fuji3195/countup-demo.git
cd countup-demo
```

Create & Activate Python virtual environment
```
python3 -m venv venv
source venv/bin/activate
```

install python dependencies
```
pip install --upgrade pip
pip intall cocotb
```

install verilator
```
sudo apt update
sudo apt install verilator
sudo apt intall gtkwave
```

## run
- default
```
make sim SIM=verilator
```
- generate waveforms (VCD)
```
make wave
# or 
make sim SIM verilator WAVES=1
```

