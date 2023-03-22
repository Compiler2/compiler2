#define NUM_ITER 9848

#include <header.h>

int main_bench()
{
  int a[20000],b[20000],i,j,k,n,x,sum;
  my_scanf("%d",&n);
  k=0;
  sum=0;
  my_scanf("%d",&a[0]);
  for(i=1;i<n;i++)
  {
    k=0;
    my_scanf("%d",&x);
    for(j=0;j<i;j++) if (x==a[j]) {k=1;break;}
    if (k==0) a[i-sum]=x;
    else sum++;
  }
  for(i=0;i<n-sum-1;i++) my_printf("%d ",a[i]);
  my_printf("%d",a[n-sum-1]);
}