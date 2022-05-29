// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S0 {
   const volatile signed f0 : 10;
   uint32_t  f1;
   volatile signed f2 : 15;
   const signed f3 : 21;
   unsigned f4 : 6;
   unsigned f5 : 26;
   const volatile unsigned f6 : 19;
};


static struct S0 g_2 = {6,0xA0D461E3L,-61,1001,6,3435,656};



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
