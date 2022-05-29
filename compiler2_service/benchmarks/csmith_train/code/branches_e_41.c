// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U0 {
   const unsigned f0 : 30;
   const volatile unsigned f1 : 27;
   int64_t  f2;
};


static uint8_t g_8 = 0x55L;
static union U0 g_9 = {0xBDA7FE64L};
static int32_t g_12 = (-1L);
static int32_t * volatile g_11 = &g_12;
static int32_t g_14 = 0L;
static int32_t g_17 = 7L;



static int8_t  func_1(void);
static int16_t  func_5(uint16_t  p_6, int8_t  p_7);




static int8_t  func_1(void)
{ 
    uint64_t l_2 = 0xB0647DC4B4E1265ALL;
    int32_t l_15[2][5][1] = {{{0xC67EE39FL},{(-10L)},{0xF3F6085EL},{0xF3F6085EL},{(-10L)}},{{0xC67EE39FL},{(-10L)},{0xF3F6085EL},{0xF3F6085EL},{(-10L)}}};
    int32_t *l_16 = &g_17;
    int16_t l_18 = (-7L);
    int i, j, k;
    --l_2;
    (*l_16) |= ((func_5(g_8, g_8) <= l_15[1][3][0]) != l_15[1][2][0]);
    return l_18;
}



static int16_t  func_5(uint16_t  p_6, int8_t  p_7)
{ 
    uint8_t l_10 = 8UL;
    int32_t *l_13[5] = {&g_14,&g_14,&g_14,&g_14,&g_14};
    int i;
    (*g_11) = (g_9 , (p_6 < l_10));
    g_14 |= (*g_11);
    return p_6;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
