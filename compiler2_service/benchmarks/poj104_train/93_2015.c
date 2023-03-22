#define NUM_ITER 1572881

#include <header.h>

int main_bench()
{
	int k,flag3=0,flag5=0,flag7=0;
	my_scanf("%d",&k);
	if(k%3==0)
	{my_printf("3");
	flag3=1;
	}
	if(k%5==0)
	{flag5=1;
		if(flag3==0) my_printf("5");
		else my_printf(" 5");
	}
	if(k%7==0)
	{flag7=1;
		if(flag3==1||flag5==1)
			my_printf(" 7");
		else my_printf("7");
	}
	if(flag3==0&&flag5==0&&flag7==0) my_printf("n");
	my_printf("\n");		
}


