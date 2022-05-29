// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_3 = 0L;
static volatile uint32_t g_13 = 0x5CABFC39L;



static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &g_3;
    int32_t *l_7 = &g_3;
    int32_t l_8 = 0L;
    int32_t *l_9 = &g_3;
    int32_t *l_10 = &l_8;
    int32_t *l_11 = &l_8;
    int32_t *l_12[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_12[i][j] = &g_3;
    }
    --g_13;
    return g_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
