#include <header.h>

int main_bench()
{
	int a,f=0;
	my_scanf("%d",&a);
	if (a%3==0) {
		my_printf("3");
        f++;
	};
	if (a%5==0) {
		if  (f) my_printf(" ");
	    my_printf("5");
		f++;
    };
	if (a%7==0) {
		if (f) my_printf(" ");
		my_printf("7");
	    f++;
	};
	if (!f) my_printf("n");
	return 0;
}