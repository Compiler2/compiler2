// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile signed f0 : 22;
   const signed f1 : 19;
   signed f2 : 9;
   volatile signed f3 : 17;
   unsigned f4 : 28;
   signed f5 : 3;
   unsigned f6 : 21;
};
#pragma pack(pop)


static int32_t g_3 = 0x5352F76EL;
static int16_t g_5 = 1L;
static int32_t g_6 = 0x7B7E80D6L;
static volatile int64_t g_7 = 0xBF118C84B7B83196LL;
static volatile uint32_t g_8 = 18446744073709551614UL;
static struct S0 g_11 = {-281,75,0,-100,11431,1,224};



static struct S0  func_1(void);




static struct S0  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4[1][2][2];
    int i, j, k;
for(int UNIQUE_ITER_0 = 0; UNIQUE_ITER_0 < 50; UNIQUE_ITER_0++)
    for (i = 0; i < 1; i++)
    {
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 50; UNIQUE_ITER_1++)
        for (j = 0; j < 2; j++)
        {
for(int UNIQUE_ITER_2 = 0; UNIQUE_ITER_2 < 50; UNIQUE_ITER_2++)
            for (k = 0; k < 2; k++)
                l_4[i][j][k] = &g_3;
        }
    }
    ++g_8;
    return g_11;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
