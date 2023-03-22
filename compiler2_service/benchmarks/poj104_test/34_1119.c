#include <header.h>

int main_bench()
{
	int a,A;
	my_scanf("%d",&a);
	if(a==1)
	{
		my_printf("End");
	}
	else
	{
		while(A!=1)
		{
			if(a%2==0)
			{
				A=a/2;
				my_printf("%d/2=%d\n",a,A);
			}
			if(a%2!=0)
			{
				A=a*3+1;
				my_printf("%d*3+1=%d\n",a,A);
			}
			a=A;
		}
		my_printf("End");
	}
	return 0;
}
	
	

