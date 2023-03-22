#include <header.h>

int main_bench()
{
	int i,j=0,k=0,x[20],y[20];
	my_scanf("%d%d",&x[0],&y[0]);
	for(i=0;x[i]!=1;i++)
	{
		x[i+1]=x[i]/2;
		k=i+1;
	}
	for(i=0;y[i]!=1;i++)
	{
		y[i+1]=y[i]/2;
		j=i+1;
	}
	for(;x[k]==y[j]&&k>=0&&j>=0;)
	{
		k--;
		j--;
	}
		my_printf("%d",x[k+1]);
}
