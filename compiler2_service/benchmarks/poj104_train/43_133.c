#define NUM_ITER 26067

#include <header.h>

int prime(int n)
{
    int i,z=1;
    for(i=3;i<=n/2;i++)
    {
         if(n%i==0)
         {z=0;break;}
    }
    return z;
}
main_bench()
{
      int n,i;
      my_scanf("%d",&n);
      for(i=3;i<=n/2;i=i+2)
      {
           if(prime(i)==1&&prime(n-i)==1)
           my_printf("%d %d\n",i,n-i);
      }
      getchar();
      getchar();
      return 0;
}
