#include <header.h>

int main_bench()
{
	int n,i,j,amount=0;
	static int a[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		do
		{
			my_scanf("%d",&a[i]);
		}
		while(a[i]==' ');
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if (a[j]==a[i])
				goto no;
		}
		if(amount==0)
			my_printf("%d",a[i]);
		else
			my_printf(",%d",a[i]);
		amount=amount+1;

no:		continue;
	}
	return 0;
}