#define NUM_ITER 52970

#include <header.h>

int main_bench()
{
    int n,i;
    my_scanf("%d",&n);
     int *Stack= (int *)malloc(n*sizeof(int));
     for(i=0;i<n;i++) my_scanf("%d",Stack+i);
     for(i=n-1;i>=0;i--){if(i==0)my_printf("%d",*(Stack+i));else my_printf("%d ",*(Stack+i));}
     return 0;

}
