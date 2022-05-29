// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
};
#pragma pack(pop)


static int32_t g_6[5][2][1] = {{{0x006310FEL},{7L}},{{0x006310FEL},{7L}},{{0x006310FEL},{7L}},{{0x006310FEL},{7L}},{{0x006310FEL},{7L}}};
static int32_t *g_5 = &g_6[4][1][0];
static uint16_t g_23 = 0xEC99L;
static uint64_t g_25 = 0UL;
static int32_t ** volatile g_27[1] = {&g_5};
static int32_t ** volatile g_39 = &g_5;



static uint32_t  func_1(void);
static int32_t * func_2(int32_t * p_3, uint32_t  p_4);




static uint32_t  func_1(void)
{ 
    int32_t l_40 = (-1L);
    uint64_t *l_47 = &g_25;
    uint8_t l_48 = 250UL;
    (*g_39) = func_2(g_5, g_6[4][1][0]);
    (*g_5) ^= l_40;
    (*g_5) = ((g_25 , (safe_sub_func_int64_t_s_s((((safe_div_func_int8_t_s_s((safe_rshift_func_int64_t_s_u((((l_47 != (void*)0) | 0x309F33D4L) ^ 4UL), l_40)), l_48)) & 9L) , l_40), 1UL))) < 0x8C20E5E2E4BCB816LL);
    return l_48;
}



static int32_t * func_2(int32_t * p_3, uint32_t  p_4)
{ 
    uint32_t l_19 = 5UL;
    int32_t *l_26[1];
    uint32_t l_29 = 0UL;
    uint64_t *l_35 = (void*)0;
    uint64_t **l_36 = (void*)0;
    uint64_t *l_38 = &g_25;
    uint64_t **l_37 = &l_38;
    int i;
    for (i = 0; i < 1; i++)
        l_26[i] = &g_6[4][1][0];
    for (p_4 = 27; (p_4 != 27); p_4 = safe_add_func_int64_t_s_s(p_4, 9))
    { 
        int32_t *l_9 = &g_6[0][0][0];
        int32_t *l_10 = (void*)0;
        int32_t *l_11 = &g_6[1][0][0];
        int32_t *l_12 = &g_6[4][1][0];
        int32_t *l_13 = &g_6[4][1][0];
        int32_t *l_14 = &g_6[1][1][0];
        int32_t *l_15 = &g_6[4][1][0];
        int32_t *l_16 = (void*)0;
        int32_t *l_17 = &g_6[4][1][0];
        int32_t *l_18[8] = {&g_6[4][1][0],&g_6[1][1][0],&g_6[4][1][0],&g_6[1][1][0],&g_6[4][1][0],&g_6[1][1][0],&g_6[4][1][0],&g_6[1][1][0]};
        struct S0 l_22 = {0x08L};
        uint64_t *l_24 = &g_25;
        int32_t **l_28 = &l_15;
        int i;
        ++l_19;
        (*l_14) = ((g_6[4][1][0] , ((*l_24) = (l_22 , g_23))) , (*g_5));
        (*l_28) = l_26[0];
    }
    l_29++;
    (*p_3) = (safe_div_func_int8_t_s_s(((~(((l_35 != ((*l_37) = &g_25)) >= g_23) || g_25)) && (*p_3)), 0x8DL));
    return p_3;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
