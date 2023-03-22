#include <header.h>

int main_bench()
{
	int n,age[100],i;
	double a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&age[i]);
	for(i=0;i<n;i++)
	{
		if(age[i]<19) a++;
		else if(age[i]<36) b++;
		else if(age[i]<61) c++;
		else d++;
	}
	a=100*a/(double)n;
	b=100*b/(double)n;
	c=100*c/(double)n;
	d=100*d/(double)n;
	my_printf("1-18: %.2f%%\n",a);
	my_printf("19-35: %.2f%%\n",b);
	my_printf("36-60: %.2f%%\n",c);
	my_printf("60??: %.2f%%\n",d);
}