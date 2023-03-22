#define NUM_ITER 151100

#include <header.h>

void echo()
{
	char c1;
	my_scanf("%c",&c1);
	if(c1!='\n')
	echo();
	my_printf("%c",c1);
}
   int main_bench()
   {echo();}