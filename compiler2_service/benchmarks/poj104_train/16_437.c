#define NUM_ITER 1358588

#include <header.h>

int main_bench()
{
	int i, n, t;
	my_scanf("%d", &n);
	if (n==0)
		my_printf("0");
	else {
	for (i=0; i<5; i++)
	{
		if (n!=0){
		t=n%10;
		my_printf("%d", t);
		n=(n-t)/10;
		}
					}
	}
	return 0;
}