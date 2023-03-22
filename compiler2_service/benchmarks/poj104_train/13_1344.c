#include <header.h>

	int main_bench()
	{
		int n,i,k,x;
		int sz[20000];
		my_scanf("%d",&n);
		my_scanf("%d",&sz[0]);
		my_printf("%d",sz[0]);
		for(i=1;i<n;i++)
		{
			my_scanf("%d",&sz[i]);	
			x=0;
				for(k=0;k<i;k++)
				{

					if(sz[i]==sz[k])
					{
					break;
					}
					else if(sz[i]!=sz[k])
					{
						x++;
					}
					if(x==i)
					{
						my_printf(" %d",sz[i]);
					}
				}
		}
		
			return 0;
	}