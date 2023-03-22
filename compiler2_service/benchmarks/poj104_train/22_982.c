#include <header.h>

int main_bench()
{
	static int a[300];
	int i,max=0,cmax=0;
	my_scanf("%d",&a[0]);
	for(i=1;getchar()==',';i++)
	{
		my_scanf("%d",&a[i]);
	}

	for(i=0;i<300;i++)
	{
		if(a[i]>max)
			max=a[i];
	}

	for(i=0;i<300;i++)
	{
		if((a[i]!=max)&&(a[i]>cmax))
			cmax=a[i];
	}
	if(cmax==0)
		my_printf("No\n");
		else
	my_printf("%d",cmax);
	return 0;
}