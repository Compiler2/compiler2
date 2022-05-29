// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


union U0 {
   uint32_t  f0;
   int32_t  f1;
   const unsigned f2 : 30;
   int32_t  f3;
};


static int16_t g_2 = 0xAA39;
static union U0 g_8 = {0x42760385};
static union U0 *g_7 = &g_8;



static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    const int16_t l_3 = 0x8F3C;
    int32_t l_4 = (-1);
    int32_t *l_6 = &l_4;
    int32_t **l_5 = &l_6;
    union U0 **l_9 = &g_7;
    l_4 &= ((g_2 | g_2) & l_3);
    (*l_5) = (void*)0;
    (*l_9) = g_7;
    return g_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
