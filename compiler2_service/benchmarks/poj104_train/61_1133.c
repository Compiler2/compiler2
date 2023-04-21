#define NUM_ITER 43483

#include <header.h>

int main_bench()
{
  int n,i;
  my_scanf("%d",&n);
  int a[n];
  for(i=0; i<=n-1;i++)
  {
    my_scanf("\n%d",&a[i]);
  }
  int A[20];
  A[0]=1;
  A[1]=1;
  for(i=2;i<=19;i++)
  {
    A[i]=A[i-1]+A[i-2];
  }
  for(i=0;i<=n-1;i++)
  {
    a[i]=A[a[i]-1];
  }
  my_printf("%d",a[0]);
  for(i=1;i<=n-1;i++)
  {
    my_printf("\n%d",a[i]);
  }
}
