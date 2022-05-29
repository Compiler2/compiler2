// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile int64_t  f0;
   int16_t  f1;
   uint16_t  f2;
   int32_t  f3;
   uint32_t  f4;
   uint32_t  f5;
   int16_t  f6;
};
#pragma pack(pop)


static struct S0 g_2 = {0x53E80C6548AAB564LL,0L,65528UL,4L,0x5169FF4CL,0xA5D732ADL,0xA237L};



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
