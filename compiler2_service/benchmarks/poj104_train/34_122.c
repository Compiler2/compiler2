#define NUM_ITER 278039

#include <header.h>

int jiaogu(int n)
{
	if(n==1)
	{
	  my_printf("End\n");
	  return 0;
	}
	else if(n%2)
	{
	  my_printf("%d%c%d%c%d%c%d\n",n,42,3,43,1,61,n*3+1);
	  n=n*3+1;
	  jiaogu(n);
	  return 0;
	}
	else
	{
	  my_printf("%d%c%d%c%d\n",n,47,2,61,n/2);
	  n=n/2;
	  jiaogu(n);
	  return 0;
	}
}

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	jiaogu(n);
	return 0;
}