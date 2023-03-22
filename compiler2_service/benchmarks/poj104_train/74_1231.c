#define NUM_ITER 1085824

#include <header.h>

int f(int x)
{
    int s=0,y,z;
    y=x;
    while(x!=0)
    {
    s=10*s+x%10;
    x=x/10;
    }
    if(s==y)
    return 1;
    else
    return 0;
}
int g(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
    if(x%i==0)
    break;
    }
    if(i==x/2+1)
    return 1;
    else return 0;
}
main_bench()
{
      int i,m,n,t=0;
      my_scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++)
      {
      if(f(i)==1 && g(i)==1)
      {
      if(t==0)
      {
      my_printf("%d",i);
      t++;
      }
      else
      my_printf(",%d",i);
      }
      }
      if(t==0)
      my_printf("no");
      getchar();
      getchar();
      }