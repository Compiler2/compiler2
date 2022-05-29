// Options:   --no-checksum --quiet --concise --max-block-depth 2 --max-array-dim 3 --max-array-len-per-dim 100 --max-expr-complexity 12
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


union U1 {
   int16_t  f0;
   const int16_t  f1;
   uint64_t  f2;
   int32_t  f3;
   unsigned f4 : 25;
};


static union U1 g_2 = {0x3656L};



static union U1  func_1(void);




static union U1  func_1(void)
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
