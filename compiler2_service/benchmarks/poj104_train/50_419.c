#define NUM_ITER 846517

#include <header.h>

int main_bench()
{
	int w,t=0,a;
	int month_days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&w);
	for (int i=1;i<=12;i++)
	{
		t+=month_days[i-1];
		a=t+w+12;
		if(a%7==5)
		{
			my_printf("%d\n",i);
		}

	}
	return 0;

}