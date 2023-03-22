#define NUM_ITER 27244

#include <header.h>

int main_bench()
{
	int n;
	double jsum,juse,a;
	int i,j;
	double xsum[100],xuse[100];
	my_scanf("%d",&n);
    my_scanf("%lf %lf",&jsum,&juse);
	a=juse/jsum;
    for(i=0;i<n-1;i++)
	{
		my_scanf("%lf %lf",&xsum[i],&xuse[i]);
	}
	for(j=0;j<n-1;j++)
	{
		if(((xuse[j]/xsum[j])-a)>0.05)
		{
			my_printf("better\n");
		}
		else if(((a-xuse[j]/xsum[j]))>0.05)
		{	
			my_printf("worse\n");
		}
		else 
			my_printf("same\n");
	}
	return 0;
}
