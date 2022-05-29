// Options:   --no-checksum --quiet --concise --max-block-depth 5 --max-array-dim 3 --max-array-len-per-dim 100 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_3 = 1L;
static int32_t * volatile g_2 = &g_3;
static int32_t * volatile * volatile g_4 = &g_2;



static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    uint16_t l_5 = 5UL;
    (*g_4) = g_2;
    return l_5;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
