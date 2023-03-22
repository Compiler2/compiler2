#define NUM_ITER 1299335

#include <header.h>

int main_bench()
{
int a,b=0;
my_scanf("%d",&a);

 while(a)
 {
  b*=10;
  b+=a%10;
  a/=10;
 }
 my_printf("\n%d",b);
return 0;
} 