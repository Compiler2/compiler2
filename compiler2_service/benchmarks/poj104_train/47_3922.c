#include <header.h>


int main_bench()
{
	int a,b[100],i;
	my_scanf("%d",&a);
	for(i=a;i>0;i--)
	{
		my_scanf("%d",&(b[i-1]));
	}
	for(i=0;i<a;i++)
	{
		switch(a-1-i)
		{
		case 0:
			my_printf("%d",b[i]);
			break;
		default:
			my_printf("%d ",b[i]);
			break;
		}
	}
	return 0;
}