#include <header.h>


int main_bench()
{
	int num;
	my_scanf("%d",&num);
	for(num=num;num>9;num/=10){

		my_printf("%d",num%10);
	}
	my_printf("%d",num);
	return 0;
	  }

