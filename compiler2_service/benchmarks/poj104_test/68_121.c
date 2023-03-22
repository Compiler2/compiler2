#include <header.h>


int joy(int a, int b)
{	
	int i;
	for (i=2;i*i<=a;i++)
	{
		if (a%i==0)
		{

			return 0;
		}
	}
	for (i=2;i*i<=b;i++)
	{
		if (b%i==0)
		{

			return 0;
		}
	}
	return 1;
}


int main_bench()
{
	int n,i,k;
	int x,y;
	my_scanf("%d",&n);
	
	for (k=6;k<=n;k=k+2)
	{

	for (i=2;i<=k/2;i++)
	{
		x=i;
		y=k-x;
		if (joy(x,y)==1)
		{		
				my_printf("%d=%d+%d\n",k,x,y);
				break;
		}
	}
	}

	return 0;

}