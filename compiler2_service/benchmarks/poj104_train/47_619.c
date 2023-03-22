#define NUM_ITER 47589

#include <header.h>


int main_bench()
{
    int i, j, n;
    int a[100];
    
    my_scanf("%d", &n);
    for (i=0; i<n; i++) {
        my_scanf("%d", &a[i]);
    }
    
    for (i=0,j=n-1; i<j; i++,j--) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    
     for (i=0; i<n; i++){ 
               my_printf("%d", a[i]);
			   if(i!=n-1) my_printf(" ");
    }
            return 0;
}