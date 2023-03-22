#include <header.h>

int main_bench()
{
	int n,a[20100],i,j;
	my_scanf("%d",&n);
	my_scanf("%d",a);
	my_printf("%d",*a);
	for(i=1;i<n;i++)
	{
		my_scanf("%d",a+i);
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i]) break;
		}
		if(j==i) my_printf(" %d",*(a+i));
	}
}