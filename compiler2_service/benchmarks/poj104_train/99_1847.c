#include <header.h>

int main_bench()
{
	int n,an[100],i,j;
	double a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&an[i]);
		if(an[i]>=1&&an[i]<=18) a++;
		if(an[i]>=19&&an[i]<=35) b++;
		if(an[i]>=36&&an[i]<=60) c++;
		if(an[i]>60) d++;
	}
	a=100*a/n;
	b=100*b/n;
	c=100*c/n;
	d=100*d/n;
	my_printf("1-18: %.2lf%%\n",a);
	my_printf("19-35: %.2lf%%\n",b);
	my_printf("36-60: %.2lf%%\n",c);
	my_printf("60??: %.2lf%%",d);
	return 0;
}

