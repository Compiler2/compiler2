#include <header.h>

int main_bench()
{
	int n,i,j,a,b;
	my_scanf("%d",&n);
	a=n;
	for(i=0;a!=1;i++)
	{
		if(a%2!=0)
		{
			b=a*3+1;
			my_printf("%d*3+1=%d\n",a,b);
			a=b;
		}
		else
		{
			b=a/2;
			my_printf("%d/2=%d\n",a,b);
			a=b;
		}
	}
	my_printf("End");
}