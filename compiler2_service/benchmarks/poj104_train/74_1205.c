#define NUM_ITER 1041383

#include <header.h>

int f(int m)
{
    int d=0;
    while(m!=0)
    {
    d=d*10+m%10;
    m=m/10;
    }
    return d;
}
int g(int n)
{
    int i,m=0;
    for(i=2;i<n;i++)
    {
      if(n%i==0)
      break;
    }
    if(i==n)
    m=1;
    return m;
}
main_bench()
{
      int a,b,i,count=0;
      my_scanf("%d %d",&a,&b);
      for(i=a;i<=b;i++)
      {
       if(f(i)==i&&g(i)==1)
       {count++;
         if(count==1)
         my_printf("%d",i);
         else
         my_printf(",%d",i);
       }
      }
      if(count==0)
      my_printf("no");
      getchar();
      getchar();
      return 0;
      }
       
      
      
      
