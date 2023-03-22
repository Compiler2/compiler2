#define NUM_ITER 25771

#include <header.h>

int sushu(int w)
{
	int c,d;
	d=1;
	c=2;
	while(c<=w-1)
	{
		if(w%c==0)
		{
			d=0;
		break;
		}
		c++;
	}
	return d;
}

	int main_bench()
{
	int m,p;
	my_scanf("%d",&m);
	p=3;
	while(p<=m/2)
	{
		if (sushu(p)&&sushu(m-p))
			my_printf("%d %d\n",p,m-p);
		p++;
	}
	return 0;
}