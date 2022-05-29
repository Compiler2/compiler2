// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S0 {
   volatile unsigned f0 : 16;
   signed f1 : 5;
   unsigned f2 : 19;
};


static struct S0 g_9 = {59,0,23};
static struct S0 ** volatile g_11 = (void*)0;
static struct S0 *g_13 = &g_9;
static struct S0 ** volatile g_12 = &g_13;



static int32_t  func_1(void);
static struct S0 * func_2(struct S0 * p_3, uint32_t  p_4, uint8_t  p_5, uint64_t  p_6, uint16_t  p_7);




static int32_t  func_1(void)
{ 
    struct S0 *l_8 = &g_9;
    int32_t l_10 = 5L;
    (*g_12) = func_2(l_8, l_10, g_9.f0, l_10, g_9.f2);
    return g_9.f1;
}



static struct S0 * func_2(struct S0 * p_3, uint32_t  p_4, uint8_t  p_5, uint64_t  p_6, uint16_t  p_7)
{ 
    return p_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
