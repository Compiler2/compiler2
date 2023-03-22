#define NUM_ITER 1560583

#include <header.h>

int main_bench()
{
	int n;
	int a,b,c,d,e;
	my_scanf("%d",&n);
    a=(int)n/10000;
	b=(int)(n-a*10000)/1000;
	c=(int)(n-a*10000-b*1000)/100;
	d=(int)(n-a*10000-b*1000-c*100)/10;
	e=(int)(n-a*10000-b*1000-c*100-d*10)/1;
	if(a!=0)
	    my_printf("%d%d%d%d%d\n",e,d,c,b,a);
	if(a==0 && b!=0 && c!=0 && d!=0)
		my_printf("%d%d%d%d\n",e,d,c,b);
	if(a==0 && b==0 && c!=0 && d!=0)
		my_printf("%d%d%d\n",e,d,c);
	if(a==0 && b==0 && c==0 && d!=0)
		my_printf("%d%d\n",e,d);
	if(a==0 && b==0 && c==0 && d==0)
		my_printf("%d\n",e);
	return 0;
}