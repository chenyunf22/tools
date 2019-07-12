python调用c/c++方法：
1.编译动态库(pycall.h pycall_so.cpp)
源文件中需要将所有接口封装为c形式的函数
编译命令：g++ -shared -fpic -lm -ldl pycall_so.cpp -o libpycall.so

2.Python加载动态库文件并调用(pycall.py)
需要使用ctypes库

