#include "pycall.h"

extern "C" {
PythonTest py;

int init(int num) {
    return py.init(num);
}

bool is_inited() {
    return py.is_inited();
}

int add (int a, int b)
{
    return a+b;
}

}
