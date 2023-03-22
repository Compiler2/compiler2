#define NUM_ITER 32

#include <header.h>


main_bench()
{
	int a[101][101]={0},b[101][101]={0},c[101][101]={0};
	int x1 ,y1 ,x2, y2,i,j,k,number=0;
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
		for(j=0;j<y2-1;j++)
		{
			for(k=0;k<y1;k++)
			number=number+a[i][k]*b[k][j];
			c[i][j]=number;	
			my_printf("%d ",c[i][j]);
			number=0;
		}
		if(j==y2-1)
		{
			for(k=0;k<y1;k++)
			number=number+a[i][k]*b[k][j];
			c[i][y2-1]=number;	
			my_printf("%d\n",c[i][j]);
			number=0;
		}	
	}

} 