// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U5 {
   uint32_t  f0;
   volatile uint8_t  f1;
   volatile uint32_t  f2;
};


static union U5 g_2 = {0x0069F30CL};



static union U5  func_1(void);




static union U5  func_1(void)
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
