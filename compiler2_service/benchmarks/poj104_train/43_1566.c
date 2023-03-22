#include <header.h>

int main_bench()
{
	int sushu(int x);
	int m,i,j,k;
	my_scanf("%d",&m);
	for (i=3;i<=m/2;i++)
	{
		k=sushu(i);
		if (k==1)
		{
			j=m-i;
			if (sushu(j)==1) my_printf("%d %d\n",i,j);
			
		}
		
	}
	return 0;
}
int sushu(int x)
{
	int n;
	for (n=2;n<x;n++)
	{
		if (x%n==0)
		{return 0;break;}
	}
	if (n>=x) return 1;
}
