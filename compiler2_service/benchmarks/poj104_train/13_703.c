#include <header.h>

int main_bench()
{
    int n,i,j;
    my_scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      my_scanf("%d",&a[i]);
    }
    if(n==1)
    my_printf("%d",a[0]);
    else
    {
    my_printf("%d",a[0]);
    for(i=1;i<n-1;i++)
    {
      for(j=0;j<i;j++)
      {
        if(a[i]==a[j])
        break;
      }
      if(i==j&&a[i]!=a[i-1])
      my_printf(" %d",a[i]);
    }
     for(j=0;j<n-1;j++)
      {
        if(a[n-1]==a[j])
        break;
      }
      if(n-1==j&&a[n-1]!=a[n-2])
      my_printf(" %d",a[n-1]);
      }
      getchar();
      getchar();
}
