#include <header.h>

main_bench()
{ 
      int i,j,n,m;
      int f[20]={1,1},a[100];
      my_scanf("%d",&n);
      for(i=1;i<=n;i++)
      {my_scanf("%d",&m);
      
      for(j=2;j<20;j++)
      f[j]=f[j-2]+f[j-1];
      my_printf("%d\n",f[m-1]);
      }
      getchar();
      getchar();
      }