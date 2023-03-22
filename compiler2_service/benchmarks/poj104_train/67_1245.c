#include <header.h>

int main_bench()
{
	int n,i;
	float c[100];
	struct A
	{
		float a;
		float b;
	}
	m[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%f",&m[i].a);
		my_scanf("%f",&m[i].b);
		c[i]=m[i].b/m[i].a;
	}
	for(i=1;i<n;i++)
	{
		if(c[i]-c[0]>0.05)
			my_printf("better\n");
		else if(c[i]-c[0]<-0.05)
			my_printf("worse\n");
		else my_printf("same\n");
	}
	return 0;
}

