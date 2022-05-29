// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_4 = 1L;
static volatile int32_t *g_5 = (void*)0;



static uint64_t  func_1(void);




static uint64_t  func_1(void)
{ 
    int32_t *l_3 = &g_4;
    int32_t **l_2[8][2];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
            l_2[i][j] = &l_3;
    }
    g_5 = (void*)0;
    return g_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
