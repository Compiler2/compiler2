#define NUM_ITER 52216

#include <header.h>

int main_bench()
{
	int sz[1001];
	int n, i, j, k, m;
	m=0;
	my_scanf("%d", &n);
	my_scanf("%d", &k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &(sz[i]));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				m=1;
				my_printf("yes");
				break;
			}
			
		}
		if(m==1)
			break;
	}
	if(m==0)
		my_printf("no");
	return 0;
}


