#define NUM_ITER 642282

#include <header.h>

int main_bench()
{
	int a[4],i,x,y;
	for(i=0;i<=3;i++)
	my_scanf("%d\n",&a[i]);
	for(i=0;i<=3;i++)
	{
	
	
	x=a[i];

	if(x<=9)
		y=x;
	else
	{
		y=0;
		for(;x>9;x/=10)
			y=(y+x-x/10*10)*10;
			y=y+x;

	}
	my_printf("%d\n",y);
	}
	
	return 0;
}