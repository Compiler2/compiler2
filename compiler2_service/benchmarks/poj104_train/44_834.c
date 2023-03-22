#define NUM_ITER 424558

#include <header.h>

int main_bench()
{
	void reverse(int num);
	int num,i;
	for(i=1;i<=6;i++)
	{
		my_scanf("%d",&num);
		if(num>0)
			reverse(num);
		else if(num==0)
			my_printf("0\n");
		else
		{
			my_printf("-");
			reverse(-num);
		}
	}
	return 0;
}
void reverse(int num)
{
	int a;
	while(num>0)
	{
		if(num%10==0)
		{
			num/=10;
		}
		else
			break;
	}
	while(num>0)
	{
		my_printf("%d",num%10);
		num/=10;
	}
	my_printf("\n");
}