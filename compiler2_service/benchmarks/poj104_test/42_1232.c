#include <header.h>

int main_bench()
{
      int n,i,j=0;
      my_scanf("%d",&n);
      long a[n],k;
      int mark[n];
      for(i=0;i<n;i++)
         my_scanf("%ld",&a[i]);
      my_scanf("%ld",&k);
      for(i=0;i<n;i++)
      {
                      if(k!=a[i])
                      {
                              mark[j]=a[i];
                              j++;  
                      }
      }
      for(i=0;i<j-1;i++)
         my_printf("%ld ",mark[i]);
      my_printf("%ld",mark[j-1]);
}