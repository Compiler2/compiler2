#include <header.h>

int main_bench()
{
    int x,y;
	my_scanf("%d %d",&x,&y);
    while(x!=y)
	{
	if(x<y)
    y=y/2;
	else if(x>y)
	x=x/2;
	}
	my_printf("%d\n",x);
}
