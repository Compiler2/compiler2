// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U6 {
   volatile int16_t  f0;
};


static int16_t g_4 = 0xFC42L;
static int32_t g_7 = (-2L);
static int32_t * volatile g_6 = &g_7;
static union U6 g_8 = {0xF62CL};



static union U6  func_1(void);




static union U6  func_1(void)
{ 
    const uint32_t l_5 = 0xA7209C39L;
    (*g_6) &= ((safe_lshift_func_uint8_t_u_u(((0x587C7AB89BDD7770LL > 0x68F928D9BA5F27A4LL) && g_4), g_4)) ^ l_5);
    return g_8;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
