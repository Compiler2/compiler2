#define NUM_ITER 42718

#include <header.h>

int main_bench()
{
  int a[200];
  int m,n,i;
  my_scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
	  my_scanf("%d",&a[i]);
     
    for(i=n-1+m;i>=m;i--)
		a[i]=a[i-m];
	for(i=0;i<m;i++)
		a[i]=a[n+i];
      my_printf("%d",a[0]);
	  for(i=1;i<n;i++)
		  my_printf(" %d",a[i]);
	  my_printf("\n");


}