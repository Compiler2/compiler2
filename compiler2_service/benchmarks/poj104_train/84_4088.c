#define NUM_ITER 64806

#include <header.h>

int main_bench()
{
	int n,a,max,sec,i,x;
	my_scanf("%d",&n);
	my_scanf("%d",&x);
	max=x;
	sec=x;
	for (i=2;i<=n;i++){
		my_scanf("%d",&x);
		if (x>=max)
			max=x;
		if ((x<max)&&(x>=sec))
			sec=x;}
	my_printf("%d\n",max);
	my_printf("%d\n",sec);
}