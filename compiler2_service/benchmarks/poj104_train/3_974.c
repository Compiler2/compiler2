#include <header.h>

int main_bench()
{
	int n,k,i,j,a;
    my_scanf("%d %d",&n,&k);
	int sz[1000];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	int m=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				break;
			else
			{
			a=sz[i]+sz[j];
			if(a==k)	
				m++;
			}
		}
	}
	if(m==0)
		my_printf("no");
	else
		my_printf("yes");
	return 0;
}


	