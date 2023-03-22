#define NUM_ITER 80841

#include <header.h>

int main_bench()
{
 int i,n,sum=0;
 my_scanf("%d",&n);
 for (i=1;i<=n;i++){
  if (i%7==0) continue;
  if (i%10==7) continue;
  if (i-i%10==70) continue;
 sum+=i*i;
 }
 my_printf("%d\n",sum);
 return 0;
}
