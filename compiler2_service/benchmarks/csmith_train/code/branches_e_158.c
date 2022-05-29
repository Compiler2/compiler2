// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static uint16_t g_9 = 1UL;
static int32_t g_11 = 0x307D7C11L;
static int32_t *g_14 = &g_11;
static int32_t ** volatile g_13 = &g_14;



static uint32_t  func_1(void);
static int32_t * func_2(int32_t  p_3, uint8_t  p_4, int32_t * p_5, uint32_t  p_6, uint8_t  p_7);




static uint32_t  func_1(void)
{ 
    uint16_t l_8 = 0x5A9CL;
    int32_t *l_10 = &g_11;
    (*g_13) = func_2((l_8 < (g_9 && l_8)), g_9, l_10, (*l_10), g_9);
    return g_11;
}



static int32_t * func_2(int32_t  p_3, uint8_t  p_4, int32_t * p_5, uint32_t  p_6, uint8_t  p_7)
{ 
    const int32_t l_12 = 0xF415D724L;
    (*p_5) = l_12;
    return p_5;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
