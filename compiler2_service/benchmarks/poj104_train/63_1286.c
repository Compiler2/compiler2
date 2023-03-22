#define NUM_ITER 32

#include <header.h>



int main_bench()
{
   int i,j,k,s,x1,y1,x2,y2,a[100][100],b[100][100];
	my_scanf("%d%d",&x1,&y1);
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y1;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&x2,&y2);
	for (i=0;i<x2;i++)
	{
		for (j=0;j<y2;j++)
		{
			my_scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y2;j++)
		{
			s=0;
			for (k=0;k<y1;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			my_printf("%d",s);
			if (j+1<y2) my_printf(" ");
		}
		if (i+1<x1) my_printf("\n");
	}
    return 0;
}
