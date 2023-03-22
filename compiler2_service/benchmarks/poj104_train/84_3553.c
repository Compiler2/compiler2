#include <header.h>

int main_bench()
{
  int n,a[100],i,max,secondmax;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)my_scanf("%d",&a[i]);
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
      max=a[i];
  }
  if(a[0]==max)
  {
    secondmax=a[1];
    for(i=1;i<n;i++)
    {
      if(a[i]>secondmax)secondmax=a[i];
    }
  }
  else
  {
    secondmax=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]<max&&a[i]>secondmax)secondmax=a[i];
    }
  }
  my_printf("%d\n",max);
  my_printf("%d\n",secondmax);
}