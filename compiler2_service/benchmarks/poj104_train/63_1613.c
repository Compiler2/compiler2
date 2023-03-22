#define NUM_ITER 30

#include <header.h>

int main_bench()
{
	int a[100][100],b[100][100],c[100][100];
	int x1,x2,y1,y2;
	my_scanf("%d %d",&x1,&y1);
	for (int i=0;i<x1;i++)
	{
		for (int j=0;j<y1;j++)
			my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d %d",&x2,&y2);
	for (int i=0;i<x2;i++)
	{
		for (int j=0;j<y2;j++)
			my_scanf("%d",&b[i][j]);		
	}
	for (int i=0;i<x1;i++)
	{
		for (int j=0;j<y2;j++)
		{
			for (int t=0;t<y1;t++)
				c[i][j]+=a[i][t]*b[t][j];
		}
	}
	for (int i=0;i<x1;i++)
	{
		for (int j=0;j<y2;j++)
		{
			my_printf("%d",c[i][j]);
			if(j!=(y2-1))
			my_printf(" ");
		}
		my_printf("\n");
	}
	return 0;
}