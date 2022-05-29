// Options:   --no-checksum --quiet --concise --no-jumps --no-float --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int8_t  f3;
   signed f4 : 12;
   unsigned f5 : 19;
   int8_t  f6;
   const signed f7 : 14;
   const int32_t  f8;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   unsigned f0 : 27;
   const unsigned f1 : 1;
   signed f2 : 31;
   struct S0  f3;
   signed f4 : 24;
   unsigned f5 : 11;
   signed f6 : 7;
};
#pragma pack(pop)


static int32_t g_4 = 4L;
static uint64_t g_18 = 0xC14AB653B1DAB551LL;
static int32_t g_21 = 0L;
static uint16_t g_31 = 9UL;
static struct S2 g_37 = {9716,0,-35063,{8L,18446744073709551615UL,0x4DFD9964L,0x74L,7,629,0x4AL,-51,-1L},877,23,4};
static struct S2 *g_36 = &g_37;



static int32_t  func_1(void);
static struct S2 * func_34(struct S2 * p_35);




static int32_t  func_1(void)
{ 
    int64_t l_2 = 0xC6FE23A266D210ECLL;
    int32_t *l_3 = &g_4;
    int32_t *l_22 = &g_4;
    int32_t *l_23 = &g_4;
    int32_t *l_24 = &g_4;
    int32_t *l_25 = &g_4;
    int32_t *l_26 = &g_4;
    int32_t *l_27 = &g_4;
    int32_t *l_28 = (void*)0;
    int32_t *l_29 = &g_4;
    int32_t *l_30 = &g_4;
    struct S2 **l_41 = &g_36;
    if (((*l_3) &= l_2))
    { 
        return g_4;
    }
    else
    { 
        int32_t *l_5 = &g_4;
        int32_t *l_6 = &g_4;
        int32_t *l_7 = &g_4;
        int32_t *l_8 = &g_4;
        int32_t *l_9 = &g_4;
        int32_t *l_10 = &g_4;
        int32_t *l_11 = &g_4;
        int32_t *l_12 = &g_4;
        int32_t *l_13 = (void*)0;
        int32_t *l_14 = &g_4;
        int32_t *l_15 = &g_4;
        int32_t l_16 = 0x039EE491L;
        int32_t *l_17 = &l_16;
        ++g_18;
    }
    g_31--;
    (*l_41) = func_34(g_36);
    return g_21;
}



static struct S2 * func_34(struct S2 * p_35)
{ 
    int32_t *l_38 = (void*)0;
    int32_t *l_39 = &g_37.f3.f0;
    struct S2 *l_40 = &g_37;
    g_37.f4 |= g_37.f3.f5;
    (*l_39) = g_37.f3.f0;
    return l_40;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
