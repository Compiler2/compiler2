// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int8_t g_2[1][3] = {{(-1L),(-1L),(-1L)}};
static volatile int32_t g_3 = 0x0F73838AL;
static int32_t g_4 = 7L;



static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    for (g_3 = 0; g_3 < 1; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 3; g_4 += 1)
        {
            g_2[g_3][g_4] = (-1L);
        }
    }
    return g_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
