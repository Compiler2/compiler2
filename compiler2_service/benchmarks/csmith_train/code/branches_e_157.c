// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile uint32_t  f0;
   int16_t  f1;
   const uint16_t  f2;
   const int16_t  f3;
   const volatile int8_t  f4;
   volatile uint8_t  f5;
   uint8_t  f6;
};
#pragma pack(pop)


static const uint8_t g_14 = 0xD8L;
static int32_t * volatile g_15 = (void*)0;
static int32_t g_17[2][3] = {{0x54207647L,0x54207647L,0x54207647L},{0L,0L,0L}};
static struct S0 g_28 = {1UL,0xCAA5L,0x732AL,0L,0L,0UL,0xD2L};



static int16_t  func_1(void);
static int32_t  func_10(int16_t  p_11, int8_t  p_12);




static int16_t  func_1(void)
{ 
    int8_t l_13 = 0x55L;
    int32_t *l_16 = &g_17[0][1];
    int32_t l_26 = (-1L);
    struct S0 *l_27[2][2][7] = {{{&g_28,(void*)0,&g_28,(void*)0,&g_28,&g_28,&g_28},{&g_28,(void*)0,&g_28,(void*)0,&g_28,&g_28,&g_28}},{{&g_28,(void*)0,&g_28,(void*)0,&g_28,&g_28,&g_28},{&g_28,(void*)0,&g_28,(void*)0,&g_28,&g_28,&g_28}}};
    int i, j, k;
    (*l_16) = (safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((-1L) & func_10(l_13, l_13)), 65530UL)), l_13)), 0x1B68DEE21AFA9B64LL)), g_14));
    l_26 &= (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_s(((((~(safe_lshift_func_uint16_t_u_s((((g_17[0][1] != (safe_sub_func_int16_t_s_s(g_17[0][1], (*l_16)))) > (*l_16)) > (*l_16)), (*l_16)))) , l_16) == l_16) && g_17[1][2]), 5))));
    l_27[1][0][1] = l_27[0][1][6];
    return (*l_16);
}



static int32_t  func_10(int16_t  p_11, int8_t  p_12)
{ 
    return p_12;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
