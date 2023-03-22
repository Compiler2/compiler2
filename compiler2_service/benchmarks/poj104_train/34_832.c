#define NUM_ITER 247499

#include <header.h>

void work(int n);
int main_bench()
{
	int n;
	my_scanf("%d",&n);
	work(n);
	return 0;
}
void work(int n)
{
	if(n==1)
		my_printf("End\n");
	else
		if(n%2==1)
		{
			int a=n*3+1;
			my_printf("%d*3+1=%d\n",n,a);
			n=a;
			work(n);
		}
		else
		{
			int a=n/2;
			my_printf("%d/2=%d\n",n,a);
			n=a;
			work(n);
		}
}