// Options:   --no-checksum --quiet --concise --no-jumps --no-int8 --no-longlong --no-arrays --no-volatiles --max-pointer-depth 4 --max-block-depth 5 --max-block-size 8 --max-expr-complexity 12

#define NO_LONGLONG

#include "csmith.h"

volatile uint32_t csmith_sink_ = 0;

static long __undefined;


union U1 {
   uint8_t  f0;
   const uint16_t  f1;
   const uint32_t  f2;
   const uint32_t  f3;
   unsigned f4 : 26;
};





static union U1  func_1(void);




static union U1  func_1(void)
{ 
    union U1 l_2 = {0xBE};
    return l_2;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
