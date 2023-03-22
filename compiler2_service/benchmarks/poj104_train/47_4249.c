#define NUM_ITER 45266

#include <header.h>


int main_bench()
{
    int n;
    my_scanf("%d", &n);
    int od[n], i;
    for (i=0; i<n; i++) {
        my_scanf("%d", &(od[i]));
    }
    int abod[n], j, k;
    for (j=0; j<n; j++) {
        abod[j]=od[n-j-1];
    }
    for (k=0; k<n-1; k++) {
        my_printf("%d ", abod[k]);
    }
    my_printf("%d", abod[n-1]);
    return 0;
}
