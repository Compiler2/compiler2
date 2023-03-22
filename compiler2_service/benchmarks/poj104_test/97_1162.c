#define NUM_ITER 1194832

#include <header.h>

  int main_bench(){
   int n,x;
   my_scanf("%d",&n);
   x=n/100;
   my_printf("%d\n",x);
   n=n-x*100;
   x=n/50;
  my_printf("%d\n",x);
  n=n-x*50;
  x=n/20;
  my_printf("%d\n",x);
  n=n-x*20;
  x=n/10;
  my_printf("%d\n",x);
n=n-x*10;
  x=n/5;
  my_printf("%d\n",x);
n=n-x*5;
  x=n;
  my_printf("%d",x);
  return 0;
}


   