#include <header.h>

int main_bench()
{
	int n, i;
	float k, p, q;
	my_scanf("%d%f%f",&n, &p, &q);
	k=q/p;
	for(i=0;i<n-1;i++)
	{
		float a, b;
		my_scanf("%f%f",&a, &b);
		if(b/a-k>0.05) my_printf("better\n");
		else if(k-b/a>0.05) my_printf("worse\n");
		else my_printf("same\n");
	}
	return 0;
}