// Options:   --no-checksum --quiet --concise --max-block-depth 2 --max-array-dim 3 --max-array-len-per-dim 100 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U3 {
   volatile uint16_t  f0;
   int16_t  f1;
   volatile uint8_t  f2;
};


static union U3 g_2 = {65535UL};



static union U3  func_1(void);




static union U3  func_1(void)
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
