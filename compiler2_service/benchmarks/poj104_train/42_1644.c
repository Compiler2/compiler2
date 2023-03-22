#define NUM_ITER 53465

#include <header.h>

int main_bench()
{
 int d=0,n,a[100000],i,b;
 my_scanf("%d",&n);
 for (i=0;i<n;i++)
 my_scanf("%d",&a[i]);
 my_scanf("%d",&b);
 for (i=0;i<n;i++)
 {
  
  if ( a[i]!=b&&d==0 )
  {
  my_printf("%d",a[i]);
  a[i]=b;
  d=1;
  }
  if ( a[i]!=b )
  my_printf(" %d",a[i]);
 }
 
} 
