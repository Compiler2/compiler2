#define NUM_ITER 263672

#include <header.h>

int main_bench()
{
	int jiaogu(int m);
	int n;
	my_scanf("%d",&n);
	jiaogu(n);
	return 0;
}
int jiaogu(int m)
{
	int a1;
	if(m==1)
	my_printf("End");
	else if(m%2==1)
	{
		a1=m*3+1;
		my_printf("%d*3+1=%d\n",m,a1);
		return(jiaogu(a1));
	}
	else if(m%2==0)
	{
		a1=m/2;
		my_printf("%d/2=%d\n",m,a1);
		return(jiaogu(a1));
	}
}
