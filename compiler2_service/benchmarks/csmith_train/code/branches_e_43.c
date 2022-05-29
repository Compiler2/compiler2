// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_4 = 0x13E19F23L;



static int8_t  func_1(void);




static int8_t  func_1(void)
{ 
    int8_t l_2[8];
    int32_t *l_3 = &g_4;
    int i;
    for (i = 0; i < 8; i++)
        l_2[i] = 0xCEL;
    (*l_3) |= l_2[6];
    return (*l_3);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
