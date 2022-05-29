// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U10 {
   const uint16_t  f0;
   signed f1 : 7;
};


static union U10 g_2[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};



static union U10  func_1(void);




static union U10  func_1(void)
{ 
    return g_2[0];
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
