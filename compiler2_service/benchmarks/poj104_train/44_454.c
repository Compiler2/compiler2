#define NUM_ITER 241476

#include <header.h>

int g(int a)
{
    int s=1;
    for(int i=0;i<a;i++)
    {
            s=s*10;
    }
    return s;
}
int f(int a)
{
    if(a<0)
    {
           a=-a;
           int i,x=0;
           for(i=0;i<=11;i++)
           {
                             if(a>=g(i)&&a<g(i+1))
                             break;
           }
           for(int j=i;j>=0;j--)
           {
                   x=x+(a/g(j))*g(i-j);
                   int k;
                   k=a/g(j);
                   a=a-k*g(j); 
           }
           x=-x;
           return x;
    }
    if(a==0)
    return 0;
    if(a>0)
    {
           int i,x=0;
           for(i=0;i<=11;i++)
           {
                             if(a>=g(i)&&a<g(i+1))
                             break;
           }
           for(int j=i;j>=0;j--)
           {
                   x=x+(a/g(j))*g(i-j);
                   int k;
                   k=a/g(j);
                   a=a-k*g(j); 
           }
           return x;
    }
}
main_bench()
{
      for(int i=6;i>=1;i--)
      {
              int a;
              my_scanf("%d",&a);
              my_printf("%d\n",f(a));
      }
}