#define NUM_ITER 9988

#include <header.h>

int main_bench()
{
 int a[20000],b[20000],i,j,k=0,flag,n;
 my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
 for(i=0;i<=n-1;i++)
 {
  flag=1;
  for(j=0;j<=i-1;j++)
   if(b[j]==a[i])
   {
    flag=0;
    break;
   }
  if(flag)
  {
   b[k]=a[i];
   k++;
  }
 }
 for(i=0;i<=k-2;i++)
  my_printf("%d ",b[i]);
  my_printf("%d",b[k-1]);
} 