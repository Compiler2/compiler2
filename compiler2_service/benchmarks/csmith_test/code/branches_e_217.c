// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 10;
   const signed f1 : 23;
   volatile unsigned f2 : 29;
   const unsigned f3 : 21;
   unsigned f4 : 16;
   volatile signed f5 : 7;
   volatile unsigned f6 : 9;
};
#pragma pack(pop)


static const struct S0 g_20 = {28,845,11607,1129,203,-0,8};
static int32_t g_24 = (-1L);
static int32_t g_25 = (-1L);
static uint8_t g_27 = 0UL;
static int32_t g_40 = 0L;
static int8_t g_42[6] = {0x0BL,1L,0x0BL,0x0BL,1L,0x0BL};
static uint32_t g_51[3][10] = {{0x291505FFL,0x61094B98L,0xBD119E2DL,1UL,0x270ADFF4L,0x291505FFL,1UL,0UL,1UL,0x291505FFL},{0x270ADFF4L,0x61094B98L,4294967293UL,0x61094B98L,0x270ADFF4L,1UL,0x61094B98L,0UL,1UL,0x270ADFF4L},{0x270ADFF4L,1UL,0xBD119E2DL,0x61094B98L,0x291505FFL,0x291505FFL,0x61094B98L,0xBD119E2DL,1UL,0x270ADFF4L}};



static uint32_t  func_1(void);
static uint64_t  func_7(uint8_t  p_8, const int16_t  p_9);




static uint32_t  func_1(void)
{ 
    uint16_t l_23 = 1UL;
    uint8_t *l_26[5][6] = {{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,(void*)0,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,(void*)0,&g_27,(void*)0,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,(void*)0,&g_27}};
    int32_t l_28 = 0L;
    int32_t l_29 = (-1L);
    int16_t l_30 = (-1L);
    int8_t *l_41 = &g_42[0];
    int32_t *l_43 = &g_24;
    int16_t *l_48 = (void*)0;
    int16_t *l_49 = &l_30;
    uint32_t *l_50 = &g_51[2][4];
    int i, j;
    (*l_43) = (safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((!(((*l_41) = ((g_40 ^= (func_7((safe_sub_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((l_28 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s((g_24 = ((((g_20 , (safe_sub_func_int64_t_s_s(0L, 0xDDBF4DF7B1466AC3LL))) | l_23) & g_20.f0) , g_20.f5)), g_25)) || 0L) || l_23) & l_23), g_20.f4)), l_23))) > g_25), l_29)) & l_23) && 7UL), l_30)), l_29) == 0xA847E08A84A00028LL)) > g_27)) != g_20.f0)), l_30)) , 0x2ACFL), l_23));
    (*l_43) = (((*l_50) = ((g_20.f4 | (safe_mul_func_int16_t_s_s(((*l_49) ^= (safe_sub_func_uint16_t_u_u(8UL, 0xF8F0L))), g_24))) , (*l_43))) && 1L);
    return g_20.f5;
}



static uint64_t  func_7(uint8_t  p_8, const int16_t  p_9)
{ 
    int16_t l_31 = 0x2DA3L;
    int32_t *l_32[3];
    int i;
    for (i = 0; i < 3; i++)
        l_32[i] = &g_24;
    g_25 = l_31;
    g_24 |= (g_25 = (safe_rshift_func_uint32_t_u_s((((safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s(((g_20 , (safe_mod_func_uint32_t_u_u((p_9 != 18446744073709551615UL), p_9))) ^ (-10L)), p_8)))) , p_9) , 0UL), g_25)));
    return p_9;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
