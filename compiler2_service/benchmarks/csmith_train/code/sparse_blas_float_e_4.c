// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_3 = (-1);
static int32_t g_5 = 0xEF5D870A;



static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_5;
    (*l_4) &= ((*l_2) ^= (-1));
    return g_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
