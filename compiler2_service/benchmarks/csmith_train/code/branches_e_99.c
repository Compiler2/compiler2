// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U1 {
   int64_t  f0;
};


static int32_t g_6 = 0x21DED680L;
static int32_t *g_5[3][1][8] = {{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}},{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}},{{&g_6,&g_6,(void*)0,&g_6,&g_6,(void*)0,&g_6,&g_6}}};
static int32_t * volatile g_8 = &g_6;
static int32_t ** volatile g_11[7][6] = {{&g_5[1][0][6],&g_5[2][0][2],(void*)0,(void*)0,(void*)0,(void*)0},{&g_5[1][0][6],&g_5[0][0][5],(void*)0,(void*)0,&g_5[2][0][4],(void*)0},{&g_5[2][0][3],&g_5[0][0][5],&g_5[2][0][3],(void*)0,(void*)0,(void*)0},{(void*)0,&g_5[2][0][2],&g_5[2][0][3],(void*)0,(void*)0,&g_5[0][0][5]},{&g_5[0][0][5],&g_5[2][0][3],&g_5[0][0][5],&g_5[0][0][5],(void*)0,(void*)0},{&g_5[0][0][5],(void*)0,(void*)0,(void*)0,(void*)0,&g_5[0][0][5]},{&g_5[2][0][1],&g_5[2][0][3],&g_5[0][0][5],&g_5[0][0][5],(void*)0,&g_5[0][0][5]}};
static int32_t ** volatile g_12 = &g_5[2][0][0];
static int32_t * volatile g_15[1] = {&g_6};
static union U1 g_17[6] = {{-3L},{-3L},{-3L},{-3L},{-3L},{-3L}};



static union U1  func_1(void);
static int32_t * func_2(int32_t * p_3, int64_t  p_4);




static union U1  func_1(void)
{ 
    int32_t **l_10 = (void*)0;
    int32_t ** volatile *l_13 = &g_11[5][5];
    uint32_t l_14 = 0xDFDDAE97L;
    int32_t *l_16 = &g_6;
    (*g_12) = func_2(g_5[0][0][5], g_6);
    l_13 = &g_12;
    (*l_16) = ((l_14 | g_6) < g_6);
    return g_17[2];
}



static int32_t * func_2(int32_t * p_3, int64_t  p_4)
{ 
    uint32_t l_7 = 3UL;
    int32_t *l_9 = (void*)0;
    (*g_8) = l_7;
    return l_9;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
