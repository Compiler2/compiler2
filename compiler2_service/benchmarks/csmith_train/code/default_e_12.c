// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const unsigned f0 : 10;
   const volatile int32_t  f1;
   const volatile signed f2 : 29;
   signed f3 : 21;
   const signed f4 : 16;
   signed f5 : 7;
   const signed f6 : 9;
   unsigned f7 : 26;
   volatile unsigned f8 : 22;
};
#pragma pack(pop)


static int32_t g_3 = 0xFF14EB4CL;
static const struct S0 g_4 = {23,0x4AD38DC5L,-8259,374,-222,9,-6,2844,1628};



static const struct S0  func_1(void);




static const struct S0  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    (*l_2) |= 0xE649F6D4L;
    return g_4;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
