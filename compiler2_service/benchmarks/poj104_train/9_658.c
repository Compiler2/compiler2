#include <header.h>

main_bench()
{
      int n,i,a[1000],e[1000],t,b,k,j,d;
      char str[1000][1000];
      my_scanf("%d",&n); 
      for(i=1;i<=n;i++)
      {
     
      my_scanf("%s %d",str[i],&a[i]);
      }
      b=0;
      for(i=1;i<=n;i++)
      {
      if(a[i]>=60)
      {b++;
      }
      }
      t=b;
      for(i=1;i<=n;i++)
      {
      if(a[i]<60)
      {b++;
      e[b]=i;}
      }
      k=0; 
      for(j=100;j>=60;j--)
      {
      for(i=1;i<=n;i++)
      {
      if(a[i]==j)
      {k++;
      e[k]=i;}
      }
      }
      for(i=1;i<=n;i++)
      {j=e[i];
      if(i==1)
      my_printf("%s",str[j]);
      else
      my_printf("\n%s",str[j]);
      }
      getchar();
      getchar();
      }
