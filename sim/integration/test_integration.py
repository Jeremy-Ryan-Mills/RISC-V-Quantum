# Cocotb test for the integration of the pulse engine, pulse scheduler, and DAC

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import numpy as np
import matplotlib.pyplot as plt
import scipy.signal as signal
