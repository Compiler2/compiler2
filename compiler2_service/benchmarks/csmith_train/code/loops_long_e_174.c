// Options:   --no-checksum --quiet --concise --max-block-depth 5 --max-array-dim 3 --max-array-len-per-dim 100 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static volatile int32_t g_3 = 0xEB32A831L;
static volatile int32_t *g_2 = &g_3;



static int64_t  func_1(void);




static int64_t  func_1(void)
{ 
    volatile int32_t **l_4 = &g_2;
    (*l_4) = g_2;
    return (**l_4);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
