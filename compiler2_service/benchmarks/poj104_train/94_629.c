#include <header.h>

int main_bench()
{
	int i,n,t,m;
	my_scanf("%d",&n);
	int sz1[1000],sz[1000];
	int s=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz1[i]);
		if(sz1[i]%2==1)
		{
			sz[s]=sz1[i];
		s++;
		}
	}
		for(i=0;i<s;i++)
	{
		for(m=0;m<s-i;m++)
			if(sz[m]>sz[m+1])
			{
				t=sz[m+1];
				sz[m+1]=sz[m];
				sz[m]=t;
			}
	}
	for(i=1;i<s;i++)
		my_printf("%d,",sz[i]);
	my_printf("%d",sz[s]);
	return 0;
}