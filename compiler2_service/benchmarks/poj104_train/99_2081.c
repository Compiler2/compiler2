#include <header.h>

int main_bench()
{
	int n,i,a[100];
	double g,k,t,m,b,c,d,f;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	for(i=0,k=0,t=0,m=0,b=0;i<n;i++)
	{
		if(a[i]>=1&&a[i]<=18)
			k=k+1;
		if(a[i]>=19&&a[i]<=35)
			t=t+1;
		if(a[i]>=36&&a[i]<=60)
			m=m+1;
		else if(a[i]>=60)
			b=b+1;
	}
	g=k/n*100;
	c=t/n*100;
	d=m/n*100;
	f=b/n*100;
    my_printf("1-18: %.2lf%%\n",g);
	 my_printf("19-35: %.2lf%%\n",c);
	  my_printf("36-60: %.2lf%%\n",d);
	   my_printf("60??: %.2lf%%\n",f);
}