#define NUM_ITER 1957409

#include <header.h>


int main_bench()
{
	int n;
	int t=0;
	my_scanf("%d",&n);
	if (n % 3==0){
		my_printf("%d",3);
		t++;
	}
    if (n % 5==0){
		if (t){
			my_printf(" ");
		}
		my_printf("5");
		t++;
	}
	if (n % 7==0){
        if (t){
			my_printf(" ");
		}
		my_printf("%d",7);
		t++;
	}
	if (t==0){
		my_printf("n");
	}
	my_printf("\n");

	return 0;
}
