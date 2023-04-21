#define NUM_ITER 653

#include <header.h>


int main_bench()
{
    int a1, b1, a2, b2;
    int n, t, area;
    int s = 0;
    my_scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            my_scanf("%d", &t);
            if (t == 0) {
                if (s == 0) {
                    a1 = i;
                    b1 = j;
                    s = 1;
                }
                a2 = i;
                b2 = j;
            }
        }

    area = (a2 - a1 - 1) * (b2 - b1 - 1);
    my_printf("%d", area);
    return 0;
}
