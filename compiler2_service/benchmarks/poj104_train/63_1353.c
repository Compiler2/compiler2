#define NUM_ITER 30

#include <header.h>

int main_bench()
{
	int a[101][101],b[101][101],c[101][101];
	int i,j,x1,y1,x2,y2,q;
	my_scanf("%d%d",&x1,&y1);
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
			my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d%d",&x2,&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
			my_scanf("%d",&b[i][j]);
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
			c[i][j]=0;
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			for(q=0;q<y1;q++)
				c[i][j]=c[i][j]+a[i][q]*b[q][j];
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
{
			my_printf("%d",c[i][j]);
		if(j!=y2-1)
			my_printf(" ");}
		my_printf("\n");
	}
	return 0;
}