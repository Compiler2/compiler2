#define NUM_ITER 55545

#include <header.h>


int main_bench()
{
   int a[100],n,m,i,*p=a;
   my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(p=a+n-m;p<a+n;p++)
    my_printf("%d ",*p);
    for(p=a;p<a+n-m-1;p++)
    my_printf("%d ",*p);
    my_printf("%d",*(a+n-m-1));
    return 0;
}