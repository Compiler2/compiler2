#include <header.h>

int main_bench()
{
  int n,a[20000],i,j,m;
  my_scanf("%d",&n);
  for (i=0;i<=n-1;i++)
 my_scanf("%d",&a[i]);
for (i=0;i<=n-1;i++)
   for (j=i+1;j<=n-1;j++)
      if (a[i]==a[j]) { for (m=j;m<n;m++)   a[m]=a[m+1]; j=j-1;n=n-1;}
for (i=0;i<n-1;i++)
my_printf("%d ",a[i]);
my_printf("%d",a[n-1]);
}