#define NUM_ITER 912945

#include <header.h>

int main_bench()
{
	int i;
	double n,m=0,t=0,x=0,y=0,age[100];
	my_scanf("%lf",&n);
    for(i=0;i<n;i++)
	my_scanf("%lf",&age[i]);
	for(i=0;i<n;i++)
	{if(age[i]<=18)
	{
		m=m+1;
	}if(age[i]>18&&age[i]<=35)
	{
		t=t+1;
	}
	if(age[i]>35&&age[i]<=60)
	{
		x=x+1;
	}else if(age[i]>60)
	{
		y=y+1;
	}
	}
	my_printf("1-18: %.2lf",m/n*100);my_printf("%%\n");
	my_printf("19-35: %.2lf",t/n*100);my_printf("%%\n");
	my_printf("36-60: %.2lf",x/n*100);my_printf("%%\n");
	my_printf("60??: %.2lf",y/n*100);my_printf("%%\n");
    return 0;
}
