#define NUM_ITER 1106580

#include <header.h>

int main_bench()
{
	int x,y;
	int a[5],i;
	int w=0;
	my_scanf("%d",&x);
	for(i=4;i>=0;i--)
	{
		a[i]=x%10;
		x=x/10;
	}
	for(i=0;a[i]==0;i++)
		w++;
	for(i=4;i>=w;i--)
		my_printf("%d",a[i]);
	my_printf("\n");
}
