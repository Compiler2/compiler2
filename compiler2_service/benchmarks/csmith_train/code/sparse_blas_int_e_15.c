// Options:   --no-checksum --quiet --concise --no-jumps --no-float --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_4 = 0x3921DED6L;



static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &g_4;
    (*l_3) &= 7L;
    return (*l_3);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
