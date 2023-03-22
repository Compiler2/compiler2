#define NUM_ITER 3006

#include <header.h>

int main_bench()
{
  int n,m,s;
  my_scanf("%d %d\n",&n,&m);
  int a[n];
  int i,j,k;
  my_scanf("%d",&a[0]);
  for(i=1;i<n;i++)
  {
   my_scanf(" %d",&a[i]);
  }
  my_scanf("\n");
  for(j=1;j<=m;j++)
  {
	s=a[n-1];
	for(k=n-2;k>=0;k--)
	{
	  a[k+1]=a[k];
	}
	a[0]=s;
  }
  my_printf("%d",a[0]);
  for(i=1;i<n;i++)
  {
	  my_printf(" %d",a[i]);
  }
return 0;
}