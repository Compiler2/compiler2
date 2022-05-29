// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int16_t  f1;
   int32_t  f2;
   int64_t  f3;
   int8_t  f4;
   uint8_t  f5;
   uint32_t  f6;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
   const unsigned f1 : 24;
   volatile unsigned f2 : 24;
   signed f3 : 4;
   signed f4 : 18;
   volatile unsigned : 0;
   unsigned f5 : 17;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   volatile unsigned f1 : 18;
   const uint32_t  f2;
   int32_t  f3;
};
#pragma pack(pop)


static volatile int32_t * volatile g_2 = (void*)0;
static int32_t g_8 = 0xC45C1D10L;
static uint64_t g_16 = 18446744073709551611UL;
static volatile struct S2 g_17 = {4294967295UL,197,18446744073709551611UL,-3L};
static struct S1 g_18 = {0L,3334,343,3,168,355};
static struct S2 g_20 = {0xFA5D8720L,71,18446744073709551615UL,0x1C57511EL};
static struct S2 g_23 = {0xDD86BDAEL,24,2UL,0xDBD55ADBL};
static struct S2 *g_22 = &g_23;
static int32_t *g_26 = (void*)0;
static struct S0 g_30 = {8L,0xC201L,0x06516035L,-6L,-1L,0x1AL,0xA07874D2L};
static const struct S2 g_33 = {9UL,326,0xA0786CB5L,0xF506A54EL};
static const struct S2 *g_32 = &g_33;



static uint16_t  func_1(void);
static struct S0  func_4(int32_t * p_5, uint8_t  p_6);




static uint16_t  func_1(void)
{ 
    volatile int32_t * volatile *l_3 = &g_2;
    int32_t *l_7 = &g_8;
    uint64_t *l_15 = &g_16;
    struct S0 *l_31 = &g_30;
    struct S2 *l_34 = (void*)0;
    struct S2 **l_35 = &g_22;
    struct S2 **l_36 = &l_34;
    (*l_3) = g_2;
    (*l_31) = func_4(l_7, (safe_mul_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((*l_15) = ((safe_div_func_int64_t_s_s(g_8, g_8)) < 0x4794L)), g_8)), (*l_7))));
    (*l_3) = ((((g_32 = &g_23) != ((*l_36) = ((*l_35) = l_34))) & g_17.f2) , (void*)0);
    return (*l_7);
}



static struct S0  func_4(int32_t * p_5, uint8_t  p_6)
{ 
    struct S2 *l_19 = &g_20;
    struct S2 **l_21 = (void*)0;
    int32_t l_29 = 0xF9046E0AL;
    g_22 = (g_17 , ((g_18 , 0x96L) , l_19));
    for (g_23.f0 = 0; (g_23.f0 >= 33); g_23.f0 = safe_add_func_uint8_t_u_u(g_23.f0, 7))
    { 
        struct S0 l_27 = {0x2987C837E05AF849LL,-1L,1L,1L,0xA6L,248UL,0xA8ACDD1FL};
        (*p_5) = ((0x88F15EA3L ^ (*p_5)) , 1L);
        if ((*p_5))
            break;
        g_26 = &g_8;
        l_27 = l_27;
    }
    (*p_5) = (((g_17 , ((((!(g_18.f5 > l_29)) | l_29) || p_6) , 0x12777FC3FE767E79LL)) > 0UL) <= 0xB2L);
    return g_30;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
