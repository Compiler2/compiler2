#include <header.h>

int main_bench()
{
    int n,k=2,i;
    my_scanf("%d",&n);
    int a[n+1];
    my_scanf("%d",&a[1]);
    my_printf("%d",a[1]);
    while(k<=n)
    {
     my_scanf("%d",&a[k]);
     i=1;
     while(i<=k-1)
     {
       if(a[i]==a[k]) break;
       else if(i==k-1) my_printf(" %d",a[k]);
       i=i+1;
       }
       k=k+1;
       }
      return 0;
}