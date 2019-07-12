#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class PythonTest {
private:
    bool m_bIsInited;
    int  m_iNum;
public:
    PythonTest() :m_bIsInited(false), m_iNum(0){}

    int init(int num) {
        m_iNum = num;
        printf("inited ok\n");
        return 0;
    }
    
    void mod(int num) {
        m_iNum = num;
    }

    bool is_inited() {
        printf("m_iNum = %d\n", m_iNum);
        return m_bIsInited;
    }
};
