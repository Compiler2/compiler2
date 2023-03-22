#define NUM_ITER 2004103

#include <header.h>

int main_bench()
{
	int n,is=0;
	my_scanf("%d",&n);
	if(n%3==0)
	{
	  my_printf("%d",3);
	  is=1;
	}
	if(n%5==0)
	{
	  if(is)my_printf(" ");
	  my_printf("%d",5);
	  is=1;
	}
	if(n%7==0)
	{
	  if(is)my_printf(" ");
	  my_printf("%d",7);
	  is=1;
	}
	if(is==0)my_printf("n");
	return 0;
}