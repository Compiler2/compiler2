#define NUM_ITER 65032

#include <header.h>

int main_bench()
{
	int n,i,m,p,j;
	my_scanf("%d %d",&n,&m);
	i=2;
	p=0;
	while(i<=n)
	{
		i=i+1;
		my_scanf("%d",&j);
		if(m<=j)
		{
			p=m;
			m=j;
		}
		else if(p<j)
		{
			m=m;
			p=j;
			
		}
	}
	my_printf("%d\n%d",m,p);
	return 0;
}