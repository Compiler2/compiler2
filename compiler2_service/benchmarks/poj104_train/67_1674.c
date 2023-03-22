#include <header.h>

int main_bench(){
	double a[1000],b[1000],c,d;
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%lf %lf",&a[i],&b[i]);
	}
	for(i=1;i<n;i++)
	{
		c=b[0]/a[0];
		d=b[i]/a[i];
		if((d-c)>0.05)
		my_printf("better\n");
		else if((c-d)>0.05)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}
	return 0;
}