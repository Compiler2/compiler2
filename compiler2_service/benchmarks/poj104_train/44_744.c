#include <header.h>

void make(int k,int x)
{
	if (x==0) return;
	int y;
	y=x%10;
	if (k==0)
	{
		if (y!=0)
		{
			my_printf("%d",y);
			make(1,x/10);
		}
		else make(0,x/10);
	} 
	else
	{
		my_printf("%d",y);
		make(1,x/10);
	}
}
int main_bench()
{
	int i,x,j,l,n,t,a[100],m;
	for (i=1;i<=6;i++)
	{
		my_scanf("%d",&n);
		if (n==0)
		{
			my_printf("0\n");
			continue;
		}
		if (n<0) my_printf("-");
		if (n<0) make(0,-n); else make(0,n);
		my_printf("\n");
	}
} 