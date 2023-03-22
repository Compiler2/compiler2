#define NUM_ITER 15133

#include <header.h>

int ss(int x)
{
    int i,a;
    i=2;
    a=1;
    while(i<x&&a!=0)
    {
                    a=x%i;
                    i++;
    }
    return(a);
}
main_bench()
{
      int n,m;
      my_scanf("%d",&n);
      m=3;
      if (n<=4)
      my_printf("empty");
      while(m<=n-2)
      {
                   if(ss(m)!=0&&ss(m+2)!=0)
                   my_printf("%d %d\n",m,m+2);
                   m++;
                   }                   
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
