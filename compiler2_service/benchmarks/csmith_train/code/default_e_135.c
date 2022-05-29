// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   const volatile unsigned f0 : 17;
   uint32_t  f1;
   uint64_t  f2;
};
#pragma pack(pop)


static volatile int32_t g_2 = 0xF3C34EEAL;
static int32_t g_3 = 0xB3F36565L;
static uint64_t g_14 = 0x0A3267E6AA165420LL;
static int32_t g_18 = 0L;
static uint32_t g_19 = 0x0C6548AAL;
static uint64_t g_21 = 0x37F4A7D2AE857B1ALL;
static struct S1 g_24 = {310,0xD50C8576L,1UL};



static struct S1  func_1(void);




static struct S1  func_1(void)
{ 
    int64_t l_20 = 1L;
for(int UNIQUE_ITER_0 = 0; UNIQUE_ITER_0 < 50; UNIQUE_ITER_0++)
    for (g_3 = 0; (g_3 == (-5)); g_3--)
    { 
        uint64_t *l_13[3][5] = {{&g_14,&g_14,&g_14,&g_14,&g_14},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_14,&g_14,&g_14,&g_14,&g_14}};
        int32_t l_15 = (-7L);
        int i, j;
        l_20 ^= (l_15 |= (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint64_t_u_s((safe_unary_minus_func_uint32_t_u((safe_mod_func_int64_t_s_s(g_3, (g_19 = (g_18 ^= (g_14--))))))), 53)), 4)));
        g_21--;
    }
    return g_24;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
