#include <header.h>


int main_bench()
{
	int n,i,o;
	my_scanf("%d",&n);
	int x[100];
	for(i=1;i<100;i++)
	{
		x[i-1]=n%10;
		n=(n-n%10)/10;
		if(n==0)
		{
			break;
		}
	}
	for(o=1;o<=i;o++)
	{
		my_printf("%d",x[o-1]);
	}
	return 0;
}
