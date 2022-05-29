// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S4 {
   volatile unsigned f0 : 1;
   unsigned f1 : 1;
   unsigned f2 : 12;
   unsigned : 0;
   unsigned f3 : 29;
   unsigned f4 : 21;
   signed f5 : 30;
};


static uint64_t g_2[4] = {0xA53086335C0DE450LL,0xA53086335C0DE450LL,0xA53086335C0DE450LL,0xA53086335C0DE450LL};
static int32_t g_4[10] = {2L,2L,2L,2L,2L,2L,2L,2L,2L,2L};
static int32_t * volatile g_3 = &g_4[5];
static volatile int32_t g_5 = 0xBFC75DAAL;
static volatile int32_t g_6 = 0xBD188380L;
static int32_t g_7 = 1L;
static struct S4 g_14 = {0,0,26,10160,1086,17570};
static int64_t g_24 = (-8L);
static int16_t g_25 = 0L;
static uint8_t g_28[1] = {0x43L};
static struct S4 g_33 = {0,0,40,17562,743,23062};



static struct S4  func_1(void);




static struct S4  func_1(void)
{ 
    int16_t l_9 = 0xBB64L;
    uint64_t l_10 = 5UL;
    int32_t l_13 = 0L;
    int32_t *l_15 = &g_7;
    int32_t *l_16[4];
    int16_t l_17 = 0L;
    int16_t l_18 = 8L;
    int32_t l_19[3][2];
    uint32_t l_20 = 4294967295UL;
    uint8_t *l_26 = (void*)0;
    uint8_t *l_27 = &g_28[0];
    int i, j;
for(int UNIQUE_ITER_0 = 0; UNIQUE_ITER_0 < 50; UNIQUE_ITER_0++)
    for (i = 0; i < 4; i++)
        l_16[i] = (void*)0;
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 50; UNIQUE_ITER_1++)
    for (i = 0; i < 3; i++)
    {
for(int UNIQUE_ITER_2 = 0; UNIQUE_ITER_2 < 50; UNIQUE_ITER_2++)
        for (j = 0; j < 2; j++)
            l_19[i][j] = 0xCE6FA973L;
    }
    (*g_3) = g_2[3];
for(int UNIQUE_ITER_3 = 0; UNIQUE_ITER_3 < 50; UNIQUE_ITER_3++)
    for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
    { 
        int32_t *l_8[5];
        int i;
for(int UNIQUE_ITER_4 = 0; UNIQUE_ITER_4 < 50; UNIQUE_ITER_4++)
        for (i = 0; i < 5; i++)
            l_8[i] = &g_4[5];
        ++l_10;
        l_13 &= (*g_3);
        return g_14;
    }
    l_20--;
    (*l_15) |= ((!((--(*l_27)) >= (safe_lshift_func_int8_t_s_u((-7L), 0)))) != g_4[8]);
    return g_33;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
