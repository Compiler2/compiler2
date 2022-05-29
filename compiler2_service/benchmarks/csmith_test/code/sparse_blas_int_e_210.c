// Options:   --no-checksum --quiet --concise --no-jumps --no-float --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U0 {
   int32_t  f0;
};


static int32_t g_3 = 4L;
static int32_t * const g_2 = &g_3;
static union U0 g_6 = {0x99CFE048L};



static union U0  func_1(void);




static union U0  func_1(void)
{ 
    int32_t *l_5 = (void*)0;
    int32_t **l_4 = &l_5;
    (*l_4) = g_2;
    return g_6;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
