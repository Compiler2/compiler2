// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static uint64_t g_2 = 0x8FC558BAC04EE7D2LL;
static int32_t g_4 = 0L;
static int32_t * volatile g_5 = (void*)0;
static int32_t g_7 = (-3L);



static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    int32_t *l_3 = &g_4;
    int32_t *l_6 = &g_7;
    (*l_3) = g_2;
    (*l_6) ^= ((*l_3) = 0x3707822EL);
    return (*l_6);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
