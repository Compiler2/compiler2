#define NUM_ITER 57156

#include <header.h>

int main_bench()
{
    int i,n;
    my_scanf("%d",&n);
    int q[100];
    for(i=0;i<n;i=i+1){
        my_scanf("%d",&(q[i]));
    }
    for(i=n-1;i>=1;i=i-1){
    my_printf("%d ",q[i]);
    }
    my_printf("%d",q[0]);
    return 0;
}
