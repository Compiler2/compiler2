#define NUM_ITER 38

#include <header.h>

int a[105][105]={0},b[105][105]={0};
int main_bench()
{
	int x1,y1,x2,y2,i,j,x,y,c,k;
	my_scanf("%d%d",&x1,&y1);
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&x2,&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			my_scanf("%d",&b[i][j]);
		}
	}
	if(x1>x2) x=x1;
	else x=x2;
	if(y1>y2) y=y1;
	else y=y2;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			c=0;
			for(k=0;k<y1;k++)
			{
				c=c+a[i][k]*b[k][j];
			}
			if(i<x1&&j<y2)
			{
				if(j==0) my_printf("%d",c);
				else my_printf(" %d",c);
			}
		}
		my_printf("\n");
	}
	return 0;
}