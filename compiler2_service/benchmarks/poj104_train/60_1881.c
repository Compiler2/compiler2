#define NUM_ITER 4342

#include <header.h>

main_bench()
{
      int n,i,j,t,m,p;
      t=1; 
      int a[10000];
      my_scanf("%d",&n);
      if(n<5)
      my_printf("empty");
      else
      {my_printf("3 5");
          for(i=2;i<=n;i++)
      {a[t]=i;
                       for(j=i;j>1;j--)
      {if(i%j==0)
      m=j;}
      if(m==i)
      {a[t]=i;
      t=t+1;}
      }
      for(p=3;p<t;p++)
      {if(a[p+1]-a[p]==2)
      my_printf("\n%d %d",a[p],a[p+1]);}
}
      }