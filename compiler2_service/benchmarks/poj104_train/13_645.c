#include <header.h>

main_bench()
{
      int i,j,n;
      my_scanf("%d",&n);
      int a[20000];
      for(i=0;i<n;i++)
      {
                      my_scanf("%d",&a[i]);
                      }
      my_printf("%d",a[0]);
      for(i=1;i<n;i++)
      {
                      int k;
                      k=0;
                      for(j=0;j<i;j++)
                      {
                                      if(a[j]!=a[i]) k++;
                                      else break;
                                      }
                                      if(k==i) my_printf(" %d",a[i]);
                      }
      getchar();getchar();getchar();getchar();getchar();
      } 
