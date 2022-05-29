// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static volatile int8_t g_2 = 0x71L;
static int32_t g_9 = (-7L);
static volatile uint64_t g_12[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};



static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t *l_3 = (void*)0;
    int32_t l_4 = 0x90069F30L;
    int8_t l_7 = (-3L);
    int32_t *l_10 = (void*)0;
    int32_t *l_11[1][4];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_11[i][j] = &l_4;
    }
    l_4 &= g_2;
    for (l_4 = 13; (l_4 < (-9)); l_4 = safe_sub_func_int8_t_s_s(l_4, 1))
    { 
        int32_t *l_8 = &g_9;
        if (l_7)
            break;
        (*l_8) |= (-3L);
    }
    --g_12[2];
    return g_12[2];
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
