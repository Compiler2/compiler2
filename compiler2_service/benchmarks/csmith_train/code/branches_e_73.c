// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_4 = 0L;
static int32_t * volatile g_11 = &g_4;



static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    uint8_t l_2 = 1UL;
    int32_t *l_3 = &g_4;
    int32_t *l_12 = &g_4;
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = &g_4;
    int32_t *l_15 = &g_4;
    int32_t *l_16 = &g_4;
    int32_t *l_17 = &g_4;
    int32_t *l_18 = &g_4;
    int32_t *l_19[8];
    uint16_t l_20 = 0UL;
    int i;
    for (i = 0; i < 8; i++)
        l_19[i] = &g_4;
    (*l_3) ^= l_2;
    for (l_2 = 0; (l_2 == 22); l_2++)
    { 
        (*l_3) ^= (((safe_rshift_func_int64_t_s_u((safe_rshift_func_int64_t_s_s(((void*)0 == g_11), 0)), 8)) >= 0xB054DBBE56890C54LL) >= 0x74B2L);
    }
    ++l_20;
    return g_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
