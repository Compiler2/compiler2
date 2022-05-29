// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


struct S1 {
   volatile unsigned f0 : 7;
   volatile unsigned f1 : 4;
   signed f2 : 5;
   unsigned f3 : 25;
   int64_t  f4;
   unsigned f5 : 24;
   signed f6 : 14;
   signed f7 : 7;
};


static struct S1 g_2 = {9,1,-0,2874,0x245C8100C4307E4ALL,3401,80,-0};
static struct S1 * volatile g_3 = &g_2;



static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    (*g_3) = g_2;
    return g_2.f7;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
