#include <header.h>

int main_bench()
{
	int n,count=0;
	int a[3];
	my_scanf("%d",&n);
	if(n%3!=0&&n%5!=0&&n%7!=0)
	{
		my_printf("n");
	}
	else 
	{
		if(n%3==0)
		{
			my_printf("3");
			count++;
		}
		
		if(n%5==0)
		{
			if(count==1) my_printf(" 5");
			if(count==0) my_printf("5");
			count++;
		}
		if(n%7==0)
		{
			if(count==0) my_printf("7");
			else my_printf(" 7");
		}

	
			
	}

	return 0;
}
