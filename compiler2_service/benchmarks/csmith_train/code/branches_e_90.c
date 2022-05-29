// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U2 {
   int64_t  f0;
   const uint64_t  f1;
   int32_t  f2;
};

union U3 {
   int16_t  f0;
   const volatile int16_t  f1;
   signed f2 : 19;
   int32_t  f3;
   const uint16_t  f4;
};


static union U2 g_9 = {9L};
static union U2 *g_8 = &g_9;
static uint16_t g_13 = 65526UL;
static uint32_t g_27 = 0UL;
static int32_t g_34[7] = {0x8B0D58E7L,0x8B0D58E7L,0x8B0D58E7L,0x8B0D58E7L,0x8B0D58E7L,0x8B0D58E7L,0x8B0D58E7L};
static int32_t *g_37 = &g_34[2];
static int32_t ** volatile g_36 = &g_37;
static union U3 g_39 = {0x4643L};
static union U3 * volatile g_38[3] = {&g_39,&g_39,&g_39};
static union U3 * volatile * volatile g_40 = &g_38[1];
static union U3 g_41 = {0xF7D5L};



static union U3  func_1(void);
static union U2 * func_2(union U2 * p_3, int32_t  p_4, uint8_t  p_5, int32_t  p_6, int16_t  p_7);




static union U3  func_1(void)
{ 
    union U2 **l_10 = &g_8;
    int32_t l_14[6] = {0x9DCEE34EL,0x9DCEE34EL,0x9DCEE34EL,0x9DCEE34EL,0x9DCEE34EL,0x9DCEE34EL};
    int i;
    (*l_10) = func_2(((*l_10) = g_8), ((safe_mod_func_int16_t_s_s(0L, g_9.f0)) < g_13), g_9.f0, l_14[1], l_14[1]);
    return g_41;
}



static union U2 * func_2(union U2 * p_3, int32_t  p_4, uint8_t  p_5, int32_t  p_6, int16_t  p_7)
{ 
    uint32_t l_17[2];
    int i;
    for (i = 0; i < 2; i++)
        l_17[i] = 18446744073709551606UL;
    if (((safe_mul_func_uint8_t_u_u(l_17[1], (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((void*)0 == p_3), g_9.f0)), 0xF995L)), 0x80L)))) == g_9.f0))
    { 
        uint32_t *l_26 = &g_27;
        int32_t l_32 = (-1L);
        int32_t *l_33 = &g_34[1];
        int32_t **l_35 = (void*)0;
        (*l_33) ^= (safe_add_func_int16_t_s_s((((--(*l_26)) && (safe_lshift_func_uint16_t_u_s(((l_32 && g_9.f0) & p_7), 11))) | p_7), p_7));
        (*g_36) = &g_34[1];
    }
    else
    { 
        (*g_40) = g_38[1];
    }
    return p_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
