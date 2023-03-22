#include <header.h>

main_bench()
{
      int n,i;
      my_scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       int m,j;
                       my_scanf("%d",&m);
          int a[1000];
          a[1]=1;
          a[2]=1;
          for(j=3;j<=m;j++)
           a[j]=a[j-1]+a[j-2];
          if(m==1||m==2)
          my_printf("%d",1);
          else
          my_printf("%d",a[m]);
          if(i<n)
          my_printf("\n");


          }
      
      getchar();
      
}