#define NUM_ITER 1228700

#include <header.h>

int main_bench()
{
	int a,m,n,p,q,r;
	my_scanf("%d",&a);
	if(a/10000!=0)
		m=a/10000;
	else if(a/10000==0)
		m=0;
	if(a/1000!=0)
		n=(a-10000*m)/1000;
	else if(a/1000==0)
		n=0;
	if(a/100!=0)
		p=(a-10000*m-1000*n)/100;
	else if(a/100==0)
		p=0;
	if(a/10!=0)
		q=(a-10000*m-1000*n-100*p)/10;
	else if(a/10==0)
		q=0;
	r=a-10000*m-1000*n-100*p-10*q;
	if(a/10000!=0)
		my_printf("%d%d%d%d%d",r,q,p,n,m);
	else if(a/1000!=0)
		my_printf("%d%d%d%d",r,q,p,n);
	else if(a/100!=0)
		my_printf("%d%d%d",r,q,p);
	else if(a/10!=0)
		my_printf("%d%d",r,q);
	else if(a/10==0)
		my_printf("%d",r);
}


	