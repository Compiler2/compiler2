#define NUM_ITER 1322845

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g,h,m;
	my_scanf("%d",&m);
	a=m%5;
	b=((m-a)%10)/5;
	f=(m-(m%100))/100;
	g=m-100*f;
	if(g>=50)
		e=1;
	else
		e=0;
	h=g-50*e-5*b-a;
	d=(h-(h%20))/20;
	c=(h-20*d)/10;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",f,e,d,c,b,a);
	return 0;
}
	
	

