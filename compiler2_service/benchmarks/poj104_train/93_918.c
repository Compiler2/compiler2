#define NUM_ITER 1561113

#include <header.h>


int main_bench()
{
	int a;
   char n;
	my_scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)my_printf("%s","3 5 7");
	else if(a%3==0&&a%5==0)my_printf("%s","3 5");
    else if(a%3==0&&a%7==0)my_printf("%s","3 7");
	else if(a%7==0&&a%5==0)my_printf("%s","5 7");
	else if(a%3==0)my_printf("%c",'3');
	else if(a%5==0)my_printf("%c",'5');
	else if(a%7==0)my_printf("%c",'7');
	else my_printf("%c",'n');
	return 0;
}
