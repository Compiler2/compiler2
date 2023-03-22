#define NUM_ITER 1153

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		int m,sum=60;
		my_scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			int a;
			my_scanf("%d",&a);
			if(a<(sum-3))
			{
			    sum -= 3;
			}
			else if(a>=(sum-3)&&a<=sum)
			{
				sum=a;
			}
		}
			my_printf("%d\n",sum);
	}
	return 0;
}


