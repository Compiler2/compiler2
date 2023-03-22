#define NUM_ITER 1386296

#include <header.h>


int main_bench()
{
	int n,a,b,c,d,e,f,p,q,s,t,u;
	my_scanf("%d",&n);
	a=n/100;
	p=n-a*100;
	b=p/50;
	q=p-b*50;
	c=q/20;
	s=q-c*20;
	d=s/10;
	t=s-d*10;
	e=t/5;
	u=t-e*5;
	f=u;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}

