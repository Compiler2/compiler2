#define NUM_ITER 53519

#include <header.h>

int main_bench()
{
	int n,age,u[100],i;double a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&u[i]);
	}
for(i=0;i<n;i++)
{
	if(u[i]>=1&&u[i]<=18)a+=1.0/n;
if(u[i]>=19&&u[i]<=35)b+=1.0/n;
if(u[i]>=36&&u[i]<=60)c+=1.0/n;
if(u[i]>60)d+=1.0/n;
}
my_printf("1-18: %.2lf%%\n",100*a);
my_printf("19-35: %.2lf%%\n",100*b);
my_printf("36-60: %.2lf%%\n",100*c);
my_printf("60??: %.2lf%%\n",100*d);
}