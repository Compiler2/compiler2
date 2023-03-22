#include <header.h>

int main_bench()
{
	int n,a[100];
	my_scanf("%d",&n);
	int i=0;
	a[0]=n;
	if(a[0]==1)
		my_printf("End");
	else
	{
	
	while(a[i]!=1)
	{
	if(a[i]%2==0)
	{
		a[i+1]=a[i]/2;
		my_printf("%d/2=%d\n",a[i],a[i+1]);
		if(a[i+1]==1)
			break;
	}
	else
	{
		a[i+1]=a[i]*3+1;
		my_printf("%d*3+1=%d\n",a[i],a[i+1]);
		if(a[i+1]==1)
			break;
	}
	i++;
	}
	my_printf("End");
	}
	return 0;

}


