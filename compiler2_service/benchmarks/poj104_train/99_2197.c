#include <header.h>

int main_bench()
{
	int n,i,a,m=0,q=0,x=0,y=0;
	double f,g,h,j;
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&a);
		if (a<=18)
			m++;
		else if(a<=35)
			q++;
		else if(a<=60)
			x++;
		else if(a>=61)
			y++;
	
	}
	
	f=m/(double)n*100;
	g=q/(double)n*100;
	h=x/(double)n*100;
	j=y/(double)n*100;
	my_printf("1-18: %.2lf%\n",f);
	my_printf("19-35: %.2lf%\n",g);
	my_printf("36-60: %.2lf%\n",h);
	my_printf("60??: %.2lf%\n",j);
	return 0;
}