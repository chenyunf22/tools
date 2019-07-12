#code=utf-8

import ctypes
from ctypes import *

## load
ll = ctypes.cdll.LoadLibrary
lib = ll("./libpycall.so")

#call
#fun = lib.init
#fun.restype = c_int

print lib.init(8);
print "*" * 20

fun = lib.is_inited
fun.restype = c_bool
print fun();
print "*" * 20

print lib.add(1, 2);
print "*" * 20

