#define NUM_ITER 1525927

#include <header.h>

int main_bench()
{
  int n;
  my_scanf("%d",&n);
  int a=n/10;
  int b=n%10;
  int m=0;
  int t;
  while(a!=0){
  m=b*10;
  t=a;
  a=a/10;
  b=t%10;
  b+=m;
  }
  my_printf("%d\n",b);
  return 0;


}