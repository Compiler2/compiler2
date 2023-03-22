#include <header.h>


int main_bench()
{
	int num;
	int i;
	
int reverse(int num,int s);
	for(i=0;i<6;i++)
	{
		my_scanf("%d",&num);
		if(num<0)
		{
			num=-num;
			my_printf("-%d\n",reverse(num,0));
		}
		else
			my_printf("%d\n",reverse(num,0));
	}
	return 0;
}

int reverse(int num,int s)
{
	s=s*10+num%10;
	if(num>=10)
		return reverse(num/10,s);
	else
		return s;
}