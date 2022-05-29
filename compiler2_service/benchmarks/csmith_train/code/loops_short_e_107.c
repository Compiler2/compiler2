// Options:   --no-checksum --quiet --concise --max-block-depth 2 --max-array-dim 3 --max-array-len-per-dim 100 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int32_t  f3;
   const int8_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   volatile uint8_t  f1;
   volatile struct S0  f2;
   uint64_t  f3;
   const volatile uint64_t  f4;
   int8_t  f5;
   int64_t  f6;
   volatile uint64_t  f7;
};
#pragma pack(pop)


static struct S1 g_2 = {{0x9523DD97L,4294967286UL,0xA98CEEF9L,0x8551B32EL,0x65L},0x5AL,{0x3380EE91L,0x76E1EE67L,0x38EB16E2L,0x9BF5E4D8L,0L},0UL,18446744073709551615UL,0L,0xA5B0420410224968LL,18446744073709551611UL};



static struct S1  func_1(void);




static struct S1  func_1(void)
{ 
    return g_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
