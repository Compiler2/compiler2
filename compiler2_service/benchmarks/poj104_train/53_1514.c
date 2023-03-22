#define NUM_ITER 52561

#include <header.h>

int main_bench()
{   
	int a[301]={0},n,i,m,j;
  my_scanf("%d",&n);
    my_scanf("%d",&m);
	my_printf("%d",m);
	a[m]=1;
for (i=1;i<n;i=i+1)
{
  my_scanf("%d",&m);
  if (a[m]==0)  
  {
	  my_printf(",%d",m);
	  a[m]=1;
  }
}

  return 0;
}
