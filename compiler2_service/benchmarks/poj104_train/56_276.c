#include <header.h>


int main_bench()
{
	int *x, y;
	int i;
	x=malloc(4*sizeof(int));
	for(i=0; i<4; i++)
	{
		my_scanf("%d", x+i);
	}
	for(i=0; i<4; i++)
	{
		y=*(x+i);
		while(y!=0)
	{
		my_printf("%d", y % 10);
		y = y / 10;
	}
		my_printf("\n");
	}
	
	return 0;
}
