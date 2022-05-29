// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static const int8_t g_2[3] = {0x07L,0x07L,0x07L};
static int32_t g_4 = 0xA9A97186L;



static const int32_t  func_1(void);




static const int32_t  func_1(void)
{ 
    int32_t *l_3 = &g_4;
    (*l_3) ^= g_2[1];
    return (*l_3);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
