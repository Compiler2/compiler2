#define NUM_ITER 52

#include <header.h>

int main_bench()
{
	int a[105][105],b[105][105],c[105][105],x1,y1,x2,y2,i,j,k,sum=0;
	my_scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			my_scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			sum=0;
			for(k=0;k<x2;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<x1;i++)
	{
		my_printf("%d",c[i][0]);
		for(j=1;j<y2;j++)
		{
			my_printf(" %d",c[i][j]);
		}
		my_printf("\n");
	}
	return 0;
}