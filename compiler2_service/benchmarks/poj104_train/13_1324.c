#include <header.h>

int main_bench()
{
    int n;
	my_scanf("%d",&n);
	int sz[20000];
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
		if(i>0)
		{
		    for(int j=0;j<i;j++)
			{
			    if(sz[j]==sz[i])
				{
					sz[i]=0;
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]>0)
		{
			if(i==0)
			{
			    my_printf("%d",sz[i]);
			}
			else
			{
				my_printf(" %d",sz[i]);
			}
		}
	}
	return 0;
}
