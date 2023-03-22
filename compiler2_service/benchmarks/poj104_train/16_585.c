#define NUM_ITER 1740018

#include <header.h>

int main_bench()
{
int i,U1,U2,U3,U4,U;
my_scanf("%d",&i);
U1=i/1000;U2=(i-1000*U1)/100;U3=(i-1000*U1-100*U2)/10;U4=(i-1000*U1-100*U2-10*U3);
if (U1!=0)
my_printf("%d%d%d%d",U4,U3,U2,U1);
else
	{
	if (U2!=0)
	my_printf("%d%d%d",U4,U3,U2);
	else
		{
		if (U3!=0)
		my_printf("%d%d",U4,U3);
		else
			{
			if (U4!=0)
			my_printf("%d",U4);
			else
			my_printf("0");
			}
		}
	}
return 0;
}
