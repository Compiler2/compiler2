#include <header.h>

int main_bench()
{
	int a,b;
	my_scanf("%d",&a);
	for(;a!=1;)
	{
		if(a%2==1)
			my_printf("%d*3+1=%d\n",a,b=a*3+1);
		else my_printf("%d/2=%d\n",a,b=a/2);
			a=b;
	}
	my_printf("End");
}
