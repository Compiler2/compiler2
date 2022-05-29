// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static int32_t g_3 = 0x0B02971CL;
static int32_t *g_2 = &g_3;
static int32_t ** volatile g_4 = &g_2;



static int32_t  func_1(void);




static int32_t  func_1(void)
{ 
    (*g_4) = g_2;
    return (*g_2);
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
