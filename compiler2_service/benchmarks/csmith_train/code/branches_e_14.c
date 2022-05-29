// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U1 {
   int16_t  f0;
};


static union U1 g_6[6][2] = {{{0x81D2L},{0x81D2L}},{{0x81D2L},{0x81D2L}},{{0x81D2L},{0x81D2L}},{{0x81D2L},{0x81D2L}},{{0x81D2L},{0x81D2L}},{{0x81D2L},{0x81D2L}}};
static int32_t g_10 = 0xBE56890CL;
static int8_t g_11[4] = {0x99L,0x99L,0x99L,0x99L};
static uint8_t g_12 = 247UL;
static int32_t ** volatile g_24 = (void*)0;
static int32_t *g_27 = &g_10;
static volatile uint16_t g_32 = 65535UL;
static int32_t g_36[8][4] = {{0xC62B4191L,1L,1L,1L},{1L,0x80EABF55L,0x1B167519L,1L},{0x1B167519L,1L,(-1L),(-1L)},{(-1L),(-1L),1L,0xC62B4191L},{(-1L),0x80EABF55L,(-1L),(-1L)},{0x1B167519L,0xC62B4191L,0x1B167519L,(-1L)},{1L,0xC62B4191L,1L,(-1L)},{0xC62B4191L,0x80EABF55L,1L,0x80EABF55L}};



static uint8_t  func_1(void);
static int32_t  func_2(union U1  p_3, uint16_t  p_4, uint16_t  p_5);




static uint8_t  func_1(void)
{ 
    int64_t l_7 = 0x5C285CE96B779C63LL;
    if (func_2(g_6[5][1], g_6[5][1].f0, l_7))
    { 
        int8_t l_15 = 3L;
        return l_15;
    }
    else
    { 
        int16_t l_19 = (-3L);
        uint64_t l_34 = 5UL;
        for (l_7 = (-6); (l_7 > 4); l_7 = safe_add_func_int64_t_s_s(l_7, 1))
        { 
            int32_t *l_18[7] = {(void*)0,&g_10,(void*)0,(void*)0,&g_10,(void*)0,(void*)0};
            int i;
            g_10 = (((l_19 = (-2L)) >= g_11[2]) < g_6[5][1].f0);
        }
        if ((safe_rshift_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((((void*)0 != &g_10) < l_7) > l_19), g_12)), l_19)))
        { 
            int32_t *l_26[1][3];
            int32_t **l_25[1][3][8] = {{{&l_26[0][0],&l_26[0][0],(void*)0,&l_26[0][0],(void*)0,&l_26[0][0],&l_26[0][0],(void*)0},{(void*)0,&l_26[0][0],&l_26[0][0],(void*)0,&l_26[0][0],&l_26[0][0],(void*)0,&l_26[0][0]},{&l_26[0][0],&l_26[0][0],&l_26[0][0],&l_26[0][0],&l_26[0][0],&l_26[0][0],&l_26[0][1],&l_26[0][0]}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_26[i][j] = &g_10;
            }
            g_27 = &g_10;
            return g_12;
        }
        else
        { 
            int16_t l_33 = 0x3AF8L;
            int32_t *l_35 = &g_36[0][1];
            (*l_35) |= ((*g_27) = ((-1L) != (safe_add_func_int32_t_s_s(((((((safe_mod_func_uint8_t_u_u(g_32, l_33)) == 0UL) & 0x114FF6A9L) & g_11[2]) ^ 0xCEL) != l_34), g_6[5][1].f0))));
            return g_32;
        }
    }
}



static int32_t  func_2(union U1  p_3, uint16_t  p_4, uint16_t  p_5)
{ 
    int32_t *l_8 = (void*)0;
    int32_t *l_9[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_9[i][j] = &g_10;
    }
    g_12++;
    return p_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
