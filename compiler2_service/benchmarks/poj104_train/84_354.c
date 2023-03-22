#define NUM_ITER 36414

#include <header.h>

int main_bench()
{
	int m1,m2,m3,a,b,c,x,y,z,w,i;
	my_scanf("%d%d%d",&w,&x,&y);
	for(i=1;i<=w-2;i++)
	{
		my_scanf("%d",&z);
		a=x;
		b=y;
		c=z;
		m1=((a+b+fabs(a-b))/2+c+fabs((a+b+(a-b))/2-c))/2;
		m3=((a+b-fabs(a-b))/2+c-fabs((a+b-(a-b))/2-c))/2;
		m2=a+b+c-m1-m3;
		x=m1;
		y=m2;
	}
	my_printf("%d\n",m1);
	my_printf("%d\n",m2);
}

