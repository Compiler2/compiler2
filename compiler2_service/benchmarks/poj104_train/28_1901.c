#include <header.h>

int main_bench()
{
	char e[50];
	int a;
	my_scanf("%s",e);
	my_printf("%d",strlen(e));
	while(my_scanf("%s",e) == 1){
		my_printf(",%d",strlen(e));
	}
	return 0;
}