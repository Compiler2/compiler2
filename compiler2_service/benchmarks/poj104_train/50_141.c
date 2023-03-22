#define NUM_ITER 1054535

#include <header.h>

int main_bench(){
	int n,m;
	my_scanf("%d",&n);
	m=13-n;
	if((13-m)%7==0)
		my_printf("1\n");
	if((44-m)%7==0)
		my_printf("2\n");
	if((72-m)%7==0)
		my_printf("3\n");
	 if((103-m)%7==0)
		my_printf("4\n");
	 if((133-m)%7==0)
		my_printf("5\n");
	 if((164-m)%7==0)
		my_printf("6\n");
	 if((194-m)%7==0)
		my_printf("7\n");
	 if((225-m)%7==0)
		my_printf("8\n");
	 if((256-m)%7==0)
		my_printf("9\n");
	 if((286-m)%7==0)
		my_printf("10\n");
	if((316-m)%7==0)
		my_printf("11\n");
	if((347-m)%7==0)
		my_printf("12\n");
	return 0;
}
