// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 27;
   unsigned f1 : 8;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S0 {
   const signed f0 : 18;
   const signed f1 : 31;
   signed f2 : 5;
   signed f3 : 29;
   signed f4 : 24;
};
#pragma pack(pop)

struct S3 {
   uint32_t  f0;
   const int32_t  f1;
   uint32_t  f2;
   struct S0  f3;
};


static const struct S1 g_2 = {3391,13};
static struct S1 g_6 = {1375,4};
static struct S3 g_8 = {0x33C7D24B,0,0x5761BE36,{-96,-2330,-1,-12731,-1825}};



static struct S3  func_1(void);




static struct S3  func_1(void)
{ 
    struct S1 *l_3 = (void*)0;
    struct S1 *l_4 = (void*)0;
    struct S1 *l_5 = &g_6;
    struct S1 **l_7 = &l_3;
    (*l_5) = g_2;
    (*l_7) = &g_6;
    return g_8;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
