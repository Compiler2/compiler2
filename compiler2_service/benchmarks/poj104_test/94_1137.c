#define NUM_ITER 18762

#include <header.h>

int main_bench()
{
  int n,k,i,t=0,s,x,j,a[600];
  my_scanf("%d",&n);
  for (i=1;i<=n;i++) 
  {
my_scanf("%d",&x);
if (x%2==1)
{
 t++;
a[t]=x;
} 
}
  for (i=1;i<=t-1;i++)
  for (j=i+1;j<=t;j++)
  if (a[i]>a[j])
  {

    s=a[i];a[i]=a[j];a[j]=s;
  }
my_printf("%d",a[1]);
  for (i=2;i<=t;i++) my_printf(",%d",a[i]);
}