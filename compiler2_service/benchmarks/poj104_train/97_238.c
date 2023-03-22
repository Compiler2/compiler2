#define NUM_ITER 1204658

#include <header.h>

int main_bench()
{
	int m,a[6],i;
	my_scanf("%d",&m);
	a[0]=m/100;
	m-=100*a[0];
	a[1]=m/50;
    m-=50*a[1];
	a[2]=m/20;
	m-=20*a[2];
	a[3]=m/10;
    m-=10*a[3];
	a[4]=m/5;
	m-=5*a[4];
	a[5]=m/1;
    for(i=0;i<6;i++)
	{
		my_printf("%d\n",a[i]);
	}
	return 0;
}