#define NUM_ITER 55906

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,age[100];
	double a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&age[i]);
		if(age[i]<=18)a++;
		if(age[i]>=19&&age[i]<=35)b++;
		if(age[i]>=36&&age[i]<=60)c++;
		if(age[i]>60)d++;
	}
    a=a/n*100;
	b=b/n*100;
	c=c/n*100;
	d=d/n*100;
	my_printf("1-18: %.2lf%%\n",a);
    my_printf("19-35: %.2lf%%\n",b);
    my_printf("36-60: %.2lf%%\n",c);
    my_printf("60??: %.2lf%%\n",d);
	return 0;
}

