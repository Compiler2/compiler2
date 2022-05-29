// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 5;
};
#pragma pack(pop)


static struct S1 g_2 = {2};



static uint32_t  func_1(void);




static uint32_t  func_1(void)
{ 
    struct S1 *l_3 = &g_2;
    (*l_3) = g_2;
    return g_2.f0;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
