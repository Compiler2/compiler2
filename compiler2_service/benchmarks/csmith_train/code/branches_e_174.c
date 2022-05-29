// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int64_t g_7 = (-10L);
static int32_t g_10 = 0x5FAC1226L;
static int32_t g_19[3][2][5] = {{{(-4L),0x0EE91B76L,(-1L),0L,(-1L)},{0L,0L,0x972C40A9L,8L,(-1L)}},{{(-1L),0x1EE67B38L,0x972C40A9L,0xDB39523DL,(-4L)},{0x1B32E265L,0x972C40A9L,(-1L),0x972C40A9L,0x1B32E265L}},{{8L,0x1EE67B38L,(-1L),0x1B32E265L,0L},{8L,0L,(-4L),0xF6F49C23L,0xF6F49C23L}}};
static int32_t * volatile g_18 = &g_19[0][1][0];
static int32_t g_24 = 0xD679BDD8L;



static uint32_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, uint64_t  p_4, uint64_t  p_5);




static uint32_t  func_1(void)
{ 
    uint64_t l_6[10] = {0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL,0x52061F665683C8FCLL};
    int32_t *l_23 = &g_24;
    int i;
    (*l_23) &= func_2(l_6[2], g_7, g_7);
    return g_24;
}



static int32_t  func_2(uint8_t  p_3, uint64_t  p_4, uint64_t  p_5)
{ 
    int32_t l_8 = (-6L);
    int64_t *l_9 = &g_7;
    int32_t *l_22[2];
    int i;
    for (i = 0; i < 2; i++)
        l_22[i] = &g_19[0][1][2];
    if ((g_10 = (2UL == ((*l_9) = ((g_7 == p_4) == l_8)))))
    { 
        return g_7;
    }
    else
    { 
        int32_t *l_21[6][6] = {{(void*)0,&g_19[2][0][0],&g_10,&g_19[1][1][3],&g_19[2][0][0],&g_19[1][1][4]},{(void*)0,(void*)0,&g_19[2][0][0],(void*)0,(void*)0,(void*)0},{&g_19[1][0][0],(void*)0,&g_10,&g_19[1][0][0],(void*)0,&g_19[1][1][3]},{&g_19[1][0][0],(void*)0,&g_19[1][1][3],(void*)0,(void*)0,&g_19[1][1][3]},{(void*)0,(void*)0,&g_10,&g_19[2][1][3],(void*)0,(void*)0},{(void*)0,(void*)0,&g_19[2][0][0],&g_19[2][1][3],(void*)0,&g_10}};
        int32_t **l_20 = &l_21[3][5];
        int i, j;
        (*g_18) ^= ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((!((safe_add_func_uint16_t_u_u((0xF72BL > (g_10 , (-9L))), (-1L))) >= 7L)) , l_9) != l_9), p_3)), g_10)) | p_3);
        l_22[0] = ((*l_20) = &g_19[0][1][3]);
    }
    return (*g_18);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
