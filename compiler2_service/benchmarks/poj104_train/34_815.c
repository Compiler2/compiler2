#define NUM_ITER 248705

#include <header.h>

int f(int x)
{
    if(x%2==0)
    {
      my_printf("%d/2=%d\n",x,x/2);
      return(x/2);
    }
    else
    { 
      my_printf("%d*3+1=%d\n",x,x*3+1);
      return(x*3+1);
     }
}
int main_bench()
{
  int x;
  my_scanf("%d",&x);
  while(x!=1)
  {
   x=f(x);
  }
  if(x==1)
   my_printf("End");;
  return 0;
}

