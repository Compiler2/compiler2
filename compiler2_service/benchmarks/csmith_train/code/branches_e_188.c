// Options:   --no-checksum --quiet --concise --max-funcs 2 --max-pointer-depth 4 --max-expr-complexity 3
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;



static uint32_t g_12 = 4294967295UL;
static int32_t g_13 = 6L;
static int16_t g_15[5][5] = {{0x3E05L,0xEDCAL,0L,0L,0xEDCAL},{0x0F82L,0L,0x6E22L,0x6E22L,0L},{0x3E05L,0xEDCAL,0L,0L,0xEDCAL},{0x0F82L,0L,0x6E22L,0x6E22L,0L},{0x3E05L,0xEDCAL,0L,0L,0xEDCAL}};
static int16_t g_16 = 9L;



static const int32_t  func_1(void);
static int32_t  func_2(uint32_t  p_3);




static const int32_t  func_1(void)
{ 
    const int32_t l_6 = (-1L);
    uint32_t *l_11 = &g_12;
    int16_t *l_14 = &g_15[0][2];
    g_16 = func_2(((((*l_14) = (safe_mul_func_uint32_t_u_u(l_6, ((safe_mul_func_uint32_t_u_u(((*l_11) = (safe_mod_func_int16_t_s_s((-8L), 0xC393L))), g_13)) | l_6)))) > g_13) < g_13));
    return g_12;
}



static int32_t  func_2(uint32_t  p_3)
{ 
    for (p_3 = 0; p_3 < 5; p_3 += 1)
    {
        for (g_13 = 0; g_13 < 5; g_13 += 1)
        {
            g_15[p_3][g_13] = 6L;
        }
    }
    return g_12;
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
