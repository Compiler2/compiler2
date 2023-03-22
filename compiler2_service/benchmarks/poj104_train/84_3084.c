#define NUM_ITER 48250

#include <header.h>


int main_bench()
{
    int a[1000];
    int max, max2;
    int n;
    my_scanf("%d", &n);
    for(int i=0; i<n; i++){
        my_scanf("%d", &a[i]);
    }

    max = a[0];
    for(int i=1; i<n; i++){
        if(a[i] > max)
            max = a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i] != max){
            max2 = a[i];
            break;
        }
    }
    for(int i=0; i<n; i++){
        if((a[i]>max2) && (a[i]!=max)){
            max2 = a[i];
        }
    }

    my_printf("%d\n%d\n", max, max2);

    return 0;
}