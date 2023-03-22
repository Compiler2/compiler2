#define NUM_ITER 1429392

#include <header.h>

int main_bench()
{
	int a,p,q,r,s,x,y,z,t,m;
    my_scanf("%d",&a);
	p=a%10000;
	q=p%1000;
	r=q%100;
	s=r%10;
	x=(r-s)/10;
	y=(q-r)/100;
	z=(p-q)/1000;
	t=(a-p)/10000;
	if(a<10)
	{m=a;my_printf("%d\n",m); return 0;}
	if(a<100)
	{m=s*10+x; my_printf("%d\n",m); return 0;}
	if(a<1000)
	{m=s*100+x*10+y;my_printf("%d\n",m); return 0;}
	if(a<10000)
	{m=s*1000+x*100+y*10+z;my_printf("%d\n",m); return 0;}
	if(a<99999)
	    m=s*10000+x*1000+y*100+z*10+t;
	my_printf("%d\n",m);
}
