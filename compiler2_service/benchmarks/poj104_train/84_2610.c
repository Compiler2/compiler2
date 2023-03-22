#define NUM_ITER 65927

#include <header.h>


int main_bench()
{
    int n, i, t, m1, m2;

    
    m1 = m2 = ~((unsigned)-1 >> 1);

    my_scanf("%d", &n);
    for (i = 0; i < n; i++) {
        my_scanf("%d", &t);
        if (t > m1) {        
            m2 = m1;
            m1 = t;
        }

    }
    my_printf("%d\n%d", m1, m2);

    return 0;
}