// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   volatile int8_t  f1;
   uint8_t  f2;
   uint8_t  f3;
   int8_t  f4;
   const unsigned f5 : 4;
   signed f6 : 11;
};
#pragma pack(pop)


static struct S0 g_2 = {0xB3921DEDL,0x80L,0x44L,0x55L,0x50L,3,27};



static struct S0  func_1(void);




static struct S0  func_1(void)
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
