// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S2 {
   volatile signed f0 : 15;
   unsigned f1 : 21;
};
#pragma pack(pop)


static int32_t g_8 = 1L;
static uint32_t g_9 = 0x91CB4E76L;
static volatile struct S2 g_12 = {-148,894};
static volatile struct S2 *g_11 = &g_12;



static int16_t  func_1(void);




static int16_t  func_1(void)
{ 
    uint64_t l_4 = 0x707822E6E7F737A9LL;
    int32_t *l_5 = (void*)0;
    int32_t l_6 = 0L;
    int32_t *l_7 = &g_8;
    (*l_7) &= (l_6 |= (safe_lshift_func_uint8_t_u_u(l_4, 1)));
    if (g_8)
        goto lbl_10;
lbl_10:
    g_9 ^= (((void*)0 != &l_6) < g_8);
    g_11 = (void*)0;
    return (*l_7);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
