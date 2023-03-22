#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	int a,b;
	double e1,e2;
	my_scanf("%d %d",&a,&b);
	e1=(double)b/a;
	int c[100],d[100];
	for(i=0;i<n-1;i++){
		my_scanf("%d %d",&c[i],&d[i]);
		e2=(double)d[i]/c[i];
		if((e2-e1)>0.05)
			my_printf("better\n");
		else if((e1-e2)>0.05)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}
	return 0;
}
