#define NUM_ITER 45346

#include <header.h>

int main_bench()
{
  int n,i,j,k,m,sum=0,a[100000];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)my_scanf("%d",&a[i]);
  my_scanf("%d",&j);
  m=a[n-1];
  a[n-1]+=(a[n-1]==j);
  for(i=0;i<n-sum;i++)
  {
   k=i;
   if(a[i]==j)
   {
    for(;i<n-sum-1;i++) a[i]=a[i+1];
    sum+=1;
    i=k-1;
   }
  }
  if(m==j)
  {
   for(i=0;i<n-sum-2;i++)my_printf("%d ",a[i]);
   my_printf("%d\n",a[n-sum-2]);
  }
  else
  {
   for(i=0;i<n-sum-1;i++)my_printf("%d ",a[i]);
   my_printf("%d\n",a[n-sum-1]);
  }
}
