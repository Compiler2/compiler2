// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U2 {
   int64_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};


static int32_t g_3 = 0L;
static int32_t ** volatile g_5 = (void*)0;
static volatile uint32_t g_10 = 1UL;
static uint32_t g_13 = 1UL;



static union U2  func_1(void);




static union U2  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t **l_4 = (void*)0;
    int32_t **l_6 = &l_2;
    int32_t *l_7 = &g_3;
    int32_t *l_8 = &g_3;
    int32_t *l_9[3];
    union U2 l_16 = {0xC75DAA08BBD18838LL};
    int i;
    for (i = 0; i < 3; i++)
        l_9[i] = &g_3;
    (*l_6) = l_2;
    ++g_10;
    g_13++;
    return l_16;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
