// Options:   --no-checksum --quiet --concise
#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;






static uint16_t  func_1(void);




static uint16_t  func_1(void)
{ 
    uint64_t l_2[9][3][3];
    int i, j, k;
for(int UNIQUE_ITER_0 = 0; UNIQUE_ITER_0 < 50; UNIQUE_ITER_0++)
    for (i = 0; i < 9; i++)
    {
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 50; UNIQUE_ITER_1++)
        for (j = 0; j < 3; j++)
        {
for(int UNIQUE_ITER_2 = 0; UNIQUE_ITER_2 < 50; UNIQUE_ITER_2++)
            for (k = 0; k < 3; k++)
                l_2[i][j][k] = 1UL;
        }
    }
    return l_2[2][0][0];
}





int main (int argc, char* argv[])
{
for(int UNIQUE_ITER_1 = 0; UNIQUE_ITER_1 < 10; UNIQUE_ITER_1++){
    func_1();
}
    return 0;
}
