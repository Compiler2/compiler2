#define NUM_ITER 12389

#include <header.h>

int main_bench()
{
	int n,m,i,a,b=1,j;
	int sz[300];
	my_scanf("%d",&n);
	my_scanf("%d",&(sz[0]));
	for(i=1;i<n;i++)
	{
		j=0;
		my_scanf("%d",&a);
		for(m=0;m<b;m++)
		{
			if(sz[m]==a)
			{
				j+=1;
			}
		}
		if(j==0)
		{
			sz[b]=a;
			b+=1;
		}
	}
	int c=0;
	for(i=0;i<b;i++)
	{
		if(c>0)
		{
			my_printf(",%d",sz[i]);
		}
		else
		{
			my_printf("%d",sz[i]);
		}
		c++;
	}
	return 0;
}