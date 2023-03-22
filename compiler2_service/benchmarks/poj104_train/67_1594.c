#include <header.h>

int main_bench(){
	int n,x,y,i;
	double jiwei,tmp;
	my_scanf("%d",&n);
	my_scanf("%d%d",&x,&y);
	jiwei=1.0*y/x;
	for (i=1;i<n;i++)
		{
		my_scanf("%d%d",&x,&y);
		tmp=1.0*y/x;
		if (tmp-jiwei>0.05)
			my_printf("better\n");
		else if (jiwei-tmp>0.05)
			my_printf("worse\n");
			else my_printf("same\n");
		}
	return 0;
}