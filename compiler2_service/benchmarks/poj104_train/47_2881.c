#include <header.h>

int main_bench()
{
    int n,a[100],*p,i;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          my_scanf("%d",&a[i]);
     }
     p=a;
     for(i=n-1;i>=0;i--)
     {
                 if(i==n-1)
                 my_printf("%d",*(p+i));
                 else
                 my_printf(" %d",*(p+i));
       }
      return 0;
}