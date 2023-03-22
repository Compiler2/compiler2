#define NUM_ITER 52859

#include <header.h>


int main_bench()
{
	int n,i;
	double a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	int s[100]={0};
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(s[i]));
		if(s[i]<=18)
		{
			a++;
		}
		if((s[i]<=35)&&(s[i]>18))
		{
			b++;
		}
		if((s[i]<=60)&&(s[i]>35))
		{
			c++;
		}
		if(s[i]>60)
		{
			d++;
		}
	}
	a/=n;
	b/=n;
	c/=n;
	d/=n;
	
	my_printf("1-18: %.2lf%%\n",a*100.0);
	my_printf("19-35: %.2lf%%\n",b*100.0);
	my_printf("36-60: %.2lf%%\n",c*100.0);
	my_printf("60??: %.2lf%%\n",d*100.0);
	return 0;
}