# Cocotb test for the pulse scheduler

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import numpy as np
import matplotlib.pyplot as plt
import scipy.signal as signal
