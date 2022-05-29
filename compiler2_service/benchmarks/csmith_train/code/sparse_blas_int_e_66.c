// Options:   --no-checksum --quiet --concise --no-jumps --no-float --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U0 {
   uint32_t  f0;
   unsigned f1 : 28;
   const int32_t  f2;
};


static int32_t g_4 = 0xAAAEB9AEL;



static union U0  func_1(void);




static union U0  func_1(void)
{ 
    uint32_t l_2 = 4294967295UL;
    int32_t l_3 = 0L;
    int32_t *l_5 = &l_3;
    union U0 l_6 = {0x68044455L};
    l_3 = l_2;
    (*l_5) = g_4;
    return l_6;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
