#define NUM_ITER 396309

#include <header.h>

int main_bench()
{
	int a, k;
	my_scanf("%d", &a);
	while(a != 1)
		if(a % 2 == 1)
		{
			k = a;
			a = a * 3 + 1;
			my_printf("%d*3+1=%d\n",k,a);	
		}
		else
		{
			k = a;
			a = a / 2;
			my_printf("%d/2=%d\n",k ,a);
		}
	if(a == 1)
		my_printf("End\n");
			
}