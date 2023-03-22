#include <header.h>

int main_bench()
{
	int n,i,a[5]={0};
	my_scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
		if(n==0)
			break;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==0)
		    break;
		my_printf("%d",a[i]);
	}
	return 0;
}