#define NUM_ITER 105151

#include <header.h>

int main_bench()
{
  int b,i=1,sum=0,n;
  double a;
  my_scanf("%d",&n);
    for(i=1;i<=n;i++)
  {
    a=(double)(i-7)/10;
    b=(i-7)/10;
    if(i%7==0||i<80&&i>69||a==b) continue;
    else sum+=i*i;
  }
  my_printf("%d\n",sum);
  return 0;
}
