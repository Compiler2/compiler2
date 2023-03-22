#define NUM_ITER 440057

#include <header.h>

int fxs(int x)
{ 
  int i;
  int y=0;  
  for(i=10;x!=0;)
  {
    y=y*10+x%i;
    x=x/i;
  }
  return y;
}
main_bench()
{ 
 for(int i=1;i<=6;i++)
 {
   int a,b;
   my_scanf("%d",&a);
   b=fxs(a);
   my_printf("%d\n",b);
 }
}                                
