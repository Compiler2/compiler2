#define NUM_ITER 1080594

#include <header.h>

int main_bench()
{
	int m,a,b,c,d,e,i,j,k,l,n,q;
	my_scanf("%d",&m);
	a=m%100;
	i=(m-a)/100;
	b=(m-i*100)%50;
	j=(m-i*100-b)/50;
	c=(m-i*100-j*50)%20;
	k=(m-i*100-j*50-c)/20;
    d=(m-i*100-j*50-k*20)%10;
	l=(m-i*100-j*50-k*20-d)/10;
	e=(m-i*100-j*50-k*20-10*l)%5;
	n=(m-i*100-j*50-k*20-10*l-e)/5;
	q=m-i*100-j*50-k*20-10*l-5*n;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",i,j,k,l,n,q);
    return 0;
}