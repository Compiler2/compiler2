#include <header.h>

int main_bench()
{
	int n,i;
	float a,b,e,f;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	e=b/a;
	for(i=1;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		f=b/a;
		if((f-e)>0.05)
			my_printf("better\n");
		else if((e-f)>0.05)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}	
	return 0;
}
