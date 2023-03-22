#define NUM_ITER 285419

#include <header.h>

int main_bench()
{
	int num1,num2;
	my_scanf("%d",&num1);
	if (num1==1)
		my_printf("End");
	else
	{
		if (num1%2==0)
			num2=num1/2;
		else
			num2=num1*3+1;
		while (num2!=1)
		{
			if (num1%2==0)
				my_printf("%d/2=%d\n",num1,num2);
			else
				my_printf("%d*3+1=%d\n",num1,num2);
			num1=num2;
			if (num1%2==0)
				num2=num1/2;
			else
				num2=num1*3+1;
		}
		if (num1%2==0)
			my_printf("%d/2=%d\n",num1,num2);
		else
			my_printf("%d*3+1=%d\n",num1,num2);
		my_printf("End");
	}
	return 0;
}