#include <header.h>

int main_bench()
{
	int n,m[20000],i,j=0,count=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m[i]);
		for(j=0;j<i;j++)
		{
			if(m[i]==m[j])
				break;
		}
		if(i==j)
		{
			if(count==0)
			{
				my_printf("%d",m[i]);
				count++;
			}
			else
				my_printf(" %d",m[i]);
		}
	}
	my_printf("\n");
	return 0;
}