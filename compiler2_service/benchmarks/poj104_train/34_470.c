#define NUM_ITER 327630

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	while (n>1)
	{
		if (n%2==0)
			{
			my_printf("%d/2=",n);
			n=n/2;
			my_printf("%d\n",n);
			}
		if (n==1)
			break;
		if (n%2!=0)
			{
			my_printf("%d*3+1=",n);
			n=n*3+1;
			my_printf("%d\n",n);
			}
	}
	my_printf("End");
	return 0;
}