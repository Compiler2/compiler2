#define NUM_ITER 2

#include <header.h>

int main_bench()
{
	int n,k,m,i,j;
	my_scanf("%d %d",&n,&k);
	for(i=1;i<10000000;i++)
	{
		m=n*i+k;
		j=1;
		while(j<n)
		{
			if(m%(n-1)==0)
			{
				m=(m*n)/(n-1)+k;
				j=j+1;
			}
			else break;
		}
		if(j==n) break;
	}
	my_printf("%d\n",m);
}