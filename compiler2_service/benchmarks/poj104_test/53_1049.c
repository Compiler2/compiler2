#define NUM_ITER 9838

#include <header.h>


int main_bench()
{
    int a[300];
    int n, i, j, k;

    
    my_scanf("%d", &n);
    for (i=0; i<n; i++) {
        my_scanf("%d", &a[i]);
    }

    
    for (i=1, k=1; i<n; i++) {
        
        for (j=0; j<k; j++) {
            if (a[i] == a[j]) {
                break;
            }
        }
        
        if (j==k) {
            a[k] = a[i];
            k++;
        }
    }

    
    for (i=0; i<k; i++) {
        if (i == 0) {
            my_printf("%d", a[i]);
        } else {
            my_printf(",%d", a[i]);
        }
    }
    return 0;
}