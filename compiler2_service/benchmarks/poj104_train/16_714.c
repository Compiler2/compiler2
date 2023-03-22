#define NUM_ITER 1517328

#include <header.h>

int main_bench()
{
  int a;
  my_scanf("%d",&a);
  if(a==0) my_printf("0");
  while (a!=0)
  {
    my_printf("%d",a-(a/10)*10);
    a=a/10; 
  } 
}