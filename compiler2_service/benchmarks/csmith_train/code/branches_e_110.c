// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S0 {
   const uint8_t  f0;
   volatile signed f1 : 13;
   uint16_t  f2;
};


static int16_t g_6 = 2L;
static int32_t g_15 = 0xB959C45CL;
static int64_t g_17 = 0x5D36729694D2B5F7LL;
static int16_t g_18 = 1L;
static volatile uint32_t g_23 = 0x0A98CEEFL;
static int32_t g_27 = 0x49687FD0L;
static int32_t * volatile g_30 = (void*)0;
static int32_t * volatile g_31 = &g_27;
static const struct S0 g_36 = {0x9AL,15,0x2F1EL};



static const struct S0  func_1(void);
static const int32_t * func_2(uint8_t  p_3);




static const struct S0  func_1(void)
{ 
    int32_t *l_9 = (void*)0;
    int32_t l_10[9];
    const int32_t *l_29 = &g_27;
    const int32_t **l_28 = &l_29;
    int i;
    for (i = 0; i < 9; i++)
        l_10[i] = 7L;
    (*l_28) = func_2((safe_add_func_int8_t_s_s((g_6 == (safe_rshift_func_uint32_t_u_s(((l_9 == l_9) > l_10[4]), 2))), 1L)));
    (*g_31) ^= (*l_29);
    g_15 |= (safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((g_27 & ((9L >= g_23) > 2L)) < 2L), g_17)), 12));
    return g_36;
}



static const int32_t * func_2(uint8_t  p_3)
{ 
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = &g_15;
    int64_t *l_16 = &g_17;
    int32_t *l_19 = &g_15;
    int32_t *l_20 = &g_15;
    int32_t *l_21 = &g_15;
    int32_t *l_22 = (void*)0;
    int32_t *l_26 = &g_27;
    g_18 = (safe_lshift_func_int64_t_s_u(((*l_16) = (((*l_14) = 0x4BA8B35EL) & 0x10227821L)), g_6));
    g_23--;
    (*l_26) &= ((*l_14) = (((l_21 != l_19) >= (*l_19)) < 0L));
    return l_14;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
