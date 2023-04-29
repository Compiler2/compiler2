#define NUM_ITER 31

#include <header.h>

int a[128][128],b[128][128],c[128][128]={0};
int main_bench()
{	int i,j,k,x1,y1,x2,y2;
	my_scanf("%d%d",&x1,&y1);
	for (i=0;i<x1;i++)
		for (j=0;j<y1;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&x2,&y2);
	for (i=0;i<x2;i++)
		for (j=0;j<y2;j++)
			my_scanf("%d",&b[i][j]);
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y2;j++)
		{
			for (k=0;k<y1;k++)
				c[i][j]+=a[i][k]*b[k][j];
			if (j>0) my_printf(" ");
			my_printf("%d",c[i][j]);
		}
		my_printf("\n");
	}
	return 0;
}