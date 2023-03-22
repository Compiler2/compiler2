#define NUM_ITER 6121

#include <header.h>

int main_bench()
{
  int a[10000],n,i,t,j,m;
  my_scanf("%d/n",&n);
  for(i=0;i<n;i++)
   my_scanf("%d",&a[i]);
  my_printf("%d",a[0]);
  for (i=1;i<=n-1;i++)
    {
    m=0;                  
    for(j=0;j<=i-1;j++)
      if(a[i]==a[j]) m=m+1;
    if(m==0) my_printf(",%d",a[i]);
     }
  return 0;
}