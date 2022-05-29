// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_3 = 0xAA6E6F7FL;
static uint8_t g_7 = 0UL;
static int32_t g_9 = 0L;



static uint8_t  func_1(void);




static uint8_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    uint8_t *l_6 = &g_7;
    int32_t *l_8[2];
    int i;
    for (i = 0; i < 2; i++)
        l_8[i] = &g_9;
    g_9 = (((*l_2) = 0x891C5534L) , ((safe_lshift_func_uint32_t_u_s(((((*l_6) |= g_3) | (*l_2)) >= (*l_2)), 13)) , g_7));
    g_9 = (((*l_2) = g_9) < (safe_rshift_func_int8_t_s_u((g_9 || 1UL), 7)));
    return g_7;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
