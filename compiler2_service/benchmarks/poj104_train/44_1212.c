#define NUM_ITER 372605

#include <header.h>


int main_bench()
{
	int reverse(int num); 
	
	int num=0;
	my_scanf("%d",&num);
	my_printf("%d\n", reverse(num));
	my_scanf("%d",&num);
	my_printf("%d\n", reverse(num));
	my_scanf("%d",&num);
	my_printf("%d\n", reverse(num));
	my_scanf("%d",&num);
	my_printf("%d\n", reverse(num));
	my_scanf("%d",&num);
	my_printf("%d\n", reverse(num));
	my_scanf("%d",&num);
	my_printf("%d\n", reverse(num));
}

int reverse (int num)
{
	int r=0,flag=0;
	if (num==0) r=0;
	else 
	{
		switch (num/abs(num))
		{
		case -1: num=num*(-1);flag=1;
		case 1: while(num)
				{
					r=r*10+num%10;
					num=num/10;
				}
		}
		if (flag==1) r=r*(-1);
	}

	
	return(r);
}