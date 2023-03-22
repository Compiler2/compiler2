#define NUM_ITER 276591

#include <header.h>

int sum(int x,int y);
int main_bench()
{
   int n,k;
   my_scanf("%d %d",&n,&k);
   my_printf("%d\n",sum(n,k));
}
int sum(int x,int y)
{
	int m,i;
	for(m=1,i=1;i<=x;i++)
	{
		m*=x;
	}
	m-=(x-1)*y;
	return m;
}