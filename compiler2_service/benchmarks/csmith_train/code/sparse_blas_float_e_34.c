// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)


static int32_t g_7 = 0;



static struct S1  func_1(void);
static int32_t * func_2(int32_t * p_3, int32_t  p_4, uint8_t  p_5);




static struct S1  func_1(void)
{ 
    int32_t *l_6 = &g_7;
    int32_t **l_8 = (void*)0;
    int32_t **l_9 = &l_6;
    struct S1 l_10 = {249U,0x29AC};
    (*l_9) = func_2(l_6, (*l_6), g_7);
    return l_10;
}



static int32_t * func_2(int32_t * p_3, int32_t  p_4, uint8_t  p_5)
{ 
    return &g_7;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
