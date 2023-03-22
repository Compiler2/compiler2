#define NUM_ITER 7704

#include <header.h>

int main_bench()
{
  int n,a[302],i,j,k=0;
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
  my_scanf("%d",&a[i]);
 for(j=1;j<=n;j++)
 {for(i=1;(i<j)&&a[i]!=a[j];i++);
 if(i==j)
  {k++;
  a[k]=a[j];} 
} 
for(i=1;i<=(k-1);i++)
my_printf("%d,",a[i]);
my_printf("%d",a[k]);
return 0;
}