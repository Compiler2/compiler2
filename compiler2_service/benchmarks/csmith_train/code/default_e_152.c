// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S0 {
   volatile uint8_t  f0;
   const int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   signed f4 : 12;
};


static struct S0 g_2 = {0xB1L,0L,4294967295UL,0UL,10};



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
