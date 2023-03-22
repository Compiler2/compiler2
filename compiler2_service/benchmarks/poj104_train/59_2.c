#define NUM_ITER 107

#include <header.h>


char a[100][100];

int main_bench()
{
    int m, n, i, j, k, count = 0;
    my_scanf("%d", &n);
    for (i = 0; i < n; i++) {
       my_scanf("%s", a[i]);
       for (j = 0; j < n; j++) {
           switch (a[i][j]) {
               case '@': a[i][j] = 1; count++; break;
               case '.': a[i][j] = 0; break;
               case '#': a[i][j] = -1; break;
           }
       }
    }
    my_scanf("%d", &m);
    for (k = 1; k < m; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == k) {
                    if (i > 0 && a[i-1][j] == 0) {
                        a[i-1][j] = k + 1;
                        count++;
                    }
                    if (i < n-1 && a[i+1][j] == 0) {
                        a[i+1][j] = k + 1;
                        count++;
                    }
                    if (j > 0 && a[i][j-1] == 0) {
                        a[i][j-1] = k + 1;
                        count++;
                    }
                    if (j < n-1 && a[i][j+1] == 0) {
                        a[i][j+1] = k + 1;
                        count++;
                    }
                }
            }
        }
    }
    my_printf("%d", count);
    return 0;
}