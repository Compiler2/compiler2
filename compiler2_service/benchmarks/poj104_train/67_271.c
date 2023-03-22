#include <header.h>

int main_bench()
{
	int n,i;
	struct jiegou
	{
		int a;
		int b;
		float x;

	}
	sz[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&sz[i].a,&sz[i].b);
		sz[i].x=(float)1.0*sz[i].b/sz[i].a*100.0;
	}
	for(i=1;i<n;i++)
	{
		if(sz[i].x-sz[0].x>5)
			my_printf("better\n");
		else if(sz[0].x-sz[i].x>5)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}
	return 0;
}
