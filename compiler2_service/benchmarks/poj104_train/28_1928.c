#define NUM_ITER 1234893

#include <header.h>

int main_bench()
{
	int a;
	char dc[50];
	my_scanf("%s",dc);
	a=strlen(dc);
	my_printf("%d",a);
	while(my_scanf("%s",dc)==1){
		a=strlen(dc);
		my_printf(",%d",a);
	}
	return 0;
}



