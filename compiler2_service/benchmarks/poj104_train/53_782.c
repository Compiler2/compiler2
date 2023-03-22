#include <header.h>



int g[300];



int main_bench()
{
	int n;
	my_scanf("%d",&n);

	int k = 0;
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",g+k);
		for(int j=0;j<k;j++)
		{
			if(g[j]==g[k])
			{
				k--;
				break;
			}
		}
		k++;
	}

	my_printf("%d",g[0]);
	for(int j=1;j<k;j++)
		my_printf(",%d",g[j]);

	return 0;
}