#define NUM_ITER 440960

#include <header.h>

main_bench()
{
	int reverse(int num);
	int n,i;
	for(i=0;i<6;i++)
	{
		my_scanf("%d",&n);
		my_printf("%d\n",reverse(n));
	}


}
int reverse(int num)
{
	int rev=0;
	if(num>=0)
	{
		while(num)
		{
			rev=rev*10+num%10;
			num=num/10;
		}
	}
	else
	{
		int fan=-num;
		while(fan)
		{
			rev=rev*10+fan%10;
			fan=fan/10;
		}
		rev=-rev;
	}
	return rev;
}
