#define NUM_ITER 1189478

#include <header.h>

int main_bench()
{
	int w;
	my_scanf("%d",&w);
	if((w+7)%7==0)
     my_printf("1\n");
	 if((w+10)%7==0)
	 my_printf("2\n3\n");
	 if((w+13)%7==0)
	 my_printf("4\n");
	 if((w+15)%7==0)
	 my_printf("5\n");
	 if((w+18)%7==0)
		 my_printf("6\n");
	 if((w+20)%7==0)
		 my_printf("7\n");
	 if((w+23)%7==0)
		 my_printf("8\n");
	 if((w+26)%7==0)
		 my_printf("9\n12\n");
	 if((w+28)%7==0)
		 my_printf("10\n");
	 if((w+31)%7==0)
		my_printf("11\n");
	
 return 0;
}