#include <header.h>

void find(int x,int y)
{
	if(x==y)
		my_printf("%d\n",x);
	else if(x>y)
		find(x/2,y);
	else
		find(x,y/2);	
}
int main_bench()
{
	int x,y;
	my_scanf("%d%d",&x,&y);
	find(x,y);
}

