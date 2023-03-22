#include <header.h>

int main_bench()
{
	int i,j,k=1,n,result[300],tem[300];
	my_scanf("%d",&n);
	my_scanf("%d",&tem[0]);
	result[0]=tem[0];
	for (i=1;i<n;i++)
	{
		my_scanf("%d",&tem[i]);
		for(j=0;j<i;j++)
		{
			if(tem[i]==result[j])
				break;
			if(j==i-1)
			{
				result[k]=tem[i];
				k++;
			}
		}
	}
	for (i=0;i<k-1;i++)
	{
		my_printf("%d,",result[i]);
	}
	my_printf("%d",result[k-1]);
	return 0;
}
