#include <header.h>

void find(int x,int y)
{
	if(x==y)
		printf("%d\n",x);
	else if(x>y)
		find(x/2,y);
	else
		find(x,y/2);	
}
int main_bench()
{
	int x,y;
	scanf("%d%d",&x,&y);
	find(x,y);
}

