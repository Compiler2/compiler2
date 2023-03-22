#define NUM_ITER 361920

#include <header.h>

int reverse(int n)
{
	int i,j,d[201],timer=0,neo=0,e=1;
	if(n<0)
		n*=-1;
	do
	{
		timer++;
		d[timer]=n%10;
		n/=10;
	} while(n>0);
	for(i=1;i<=timer;i++)
	{
		for(j=1;j<=timer-i;j++)
		{
			e*=10;
		}
		neo+=d[i]*e;
		e=1;
	}
	return neo;
}
int main_bench()
{
	int n,i;
	for(i=1;i<7;i++)
	{
		my_scanf("%d",&n);
		if(n<0)
			my_printf("-");
		my_printf("%d\n",reverse(n));
	}
	return 0;
}