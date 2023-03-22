#include <header.h>

int main_bench()
{
	int a,n,i,t;
	my_scanf("%d",&a);
	if(a==1) my_printf("End");
	else
	{
	while(a!=1)
	{
		if(a%2==1)
		{
			t=a*3+1;
			my_printf("%d*3+1=%d\n",a,t);
			a=t;
		}
		if(a%2==0)
		{
			t=a/2;
			my_printf("%d/2=%d\n",a,t);
			a=t;
		}
	}
	my_printf("End");
	}
	
}



	

