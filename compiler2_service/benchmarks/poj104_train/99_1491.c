#define NUM_ITER 55060

#include <header.h>

int main_bench()
{
	int n,age[100],i,a=0,b=0,c=0,d=0;
	double agea,ageb,agec,aged;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&age[i]);
		if (age[i]<=18)
		{
			a++;
		}
		if (age[i]>=19&&age[i]<=35)
		{
			b++;
		}
		if (age[i]>=36&&age[i]<=60)
		{
			c++;
		}
		if (age[i]>60)
		{
			d++;
		}
	}
	agea=(double)a/n*100;
	ageb=(double)b/n*100;
	agec=(double)c/n*100;
	aged=(double)d/n*100;
	my_printf("1-18: %.2lf",agea);
	my_printf("%%\n");
	my_printf("19-35: %.2lf",ageb);
	my_printf("%%\n");
	my_printf("36-60: %.2lf",agec);
	my_printf("%%\n");
	my_printf("60??: %.2lf",aged);
	my_printf("%%\n");
	return 0;
}
	