#define NUM_ITER 44356

#include <header.h>

int main_bench()
{
 void de(int x[],int n, int m);
    int n,m,i,x[100];
    my_scanf("%d%d",&n,&m);
    for(i=0;i<=n-1;i++)
    my_scanf("%d",&x[i]);
    de(x,n,m);
    my_printf("%d",x[0]);
    for(i=1;i<=n-1;i++)
    my_printf(" %d",x[i]);
return 0;
}
void de(int x[],int n, int m)
{
     int i;
     for(i=0;i<=n-m-1;i++)
     x[i+n]=x[i];
     for(i=0;i<=n-1;i++)
     x[i]=x[i+n-m];
}
