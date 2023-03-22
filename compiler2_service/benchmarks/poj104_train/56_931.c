#include <header.h>

int main_bench()
{   
	int a[5];
	int b,i,n;
	my_scanf("%d",&b);
    for(i=0;i<5;i++)
	{
		a[i]=b%10;
		b=(b-(b%10))/10;
	}
	for(n=4;;n--)
	{
		if(a[n]==0)
			continue;
		else break;
	}
	for(i=0;i<=n;i++)
	{
		my_printf("%d",a[i]);
	}	
	my_printf("\n");
}

