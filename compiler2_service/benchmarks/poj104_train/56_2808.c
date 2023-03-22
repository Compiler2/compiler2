#define NUM_ITER 408194

#include <header.h>

int main_bench()
{
	char c;
	int y;
	y=0;
	int t;
	t=1;
	c=getchar();
	while (c!=10)
	{
		y=y+(c-48)*t;
		t=t*10;
		c=getchar();
	}
	my_printf("%d",y);
}
