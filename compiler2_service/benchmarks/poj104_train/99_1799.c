#define NUM_ITER 967236

#include <header.h>

int main_bench()
{
	int a[100],i;
	double n,x=0,y=0,z=0,m=0;
	double j,k,l,f;
	my_scanf("%lf",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		if(a[i]<=18)
			x++;
		else if(a[i]<=35)
			y++;
		else if(a[i]<=60)
			z++;
		else if(a[i]>60)
			m++;
	}
    j=(x/n)*100;
	k=(y/n)*100;
	l=(z/n)*100;
	f=(m/n)*100;
	my_printf("1-18: ");
	my_printf("%.2lf",j);
	my_printf("%%\n");
	my_printf("19-35: ");
	my_printf("%.2lf",k);
	my_printf("%%\n");
	my_printf("36-60: ");
	my_printf("%.2lf",l);
	my_printf("%%\n");
	my_printf("60??: ");
	my_printf("%.2lf",f);
	my_printf("%%");
	return 0;
}
