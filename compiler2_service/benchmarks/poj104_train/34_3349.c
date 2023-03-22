#define NUM_ITER 260519

#include <header.h>

int main_bench()
{
	void jiaogu(int);;
	int input;
	my_scanf("%d",&input);
	jiaogu(input);
	return 0;
}
void jiaogu(int num)
{
	if(num==1)
	{
		my_printf("End");
	}
	else
	{
		if(num%2==0)
		{
			my_printf("%d/2=%d\n",num,num/2);
			jiaogu(num/2);
		}
		else
		{
			my_printf("%d*3+1=%d\n",num,num*3+1);
			jiaogu(num*3+1);
		}
	}
}
			
