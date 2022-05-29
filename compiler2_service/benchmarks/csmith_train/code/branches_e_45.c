// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S0 {
   signed f0 : 4;
};


static uint16_t g_7 = 65535UL;
static volatile struct S0 g_8 = {1};
static volatile struct S0 * volatile g_9 = &g_8;
static int32_t g_11 = (-3L);



static int32_t  func_1(void);
static uint8_t  func_5(uint64_t  p_6);




static int32_t  func_1(void)
{ 
    int64_t l_2 = 1L;
    int32_t *l_10 = &g_11;
    (*l_10) &= (l_2 | (safe_add_func_uint8_t_u_u(func_5(g_7), l_2)));
    return (*l_10);
}



static uint8_t  func_5(uint64_t  p_6)
{ 
    (*g_9) = g_8;
    return g_7;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
