#define NUM_ITER 324816

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    while(n!=1)
    { if(n%2==0)
   { n=n/2;
    my_printf("%d/2=%d\n",2*n,n);
    if(n==1)
    break;}
    if(n%2!=0)
   { my_printf("%d*3+1=%d\n",n,3*n+1);
    n=n*3+1;
    if(n==1)
    break;}
}my_printf("End");
getchar();
getchar();
return 0;
}
