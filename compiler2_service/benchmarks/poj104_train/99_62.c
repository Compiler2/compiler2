#include <header.h>

int main_bench()
{
	int i,a,n,ag1=0,ag2=0,ag3=0,ag4=0;
	double p1,p2,p3,p4;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		if(a<=18)ag1++;
		else if(a<=35)ag2++;
		else if(a<=60)ag3++;
		else ag4++;

	}
	p1=(double)ag1/(double)n*100;
	p2=(double)ag2/(double)n*100;
	p3=(double)ag3/(double)n*100;
	p4=(double)ag4/(double)n*100;
	my_printf("1-18: %.2lf",p1);
    my_printf("%%\n");
	my_printf("19-35: %.2lf",p2);
    my_printf("%%\n");
	my_printf("36-60: %.2lf",p3);
    my_printf("%%\n");
	my_printf("60??: %.2lf",p4);
    my_printf("%%\n");
}