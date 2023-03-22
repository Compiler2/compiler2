#include <header.h>

int main_bench()
{
	int a[5][5],i,j,k,x[5]={0},y[5]={0},g=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d ",&a[i][j]);
		}
		my_printf("\n");
	}
	for(i=0;i<5;i++)
	{
		k=a[i][0];
		for(j=0;j<5;j++)
		{
			if(a[i][j]>k)
			{
				k=a[i][j];
				x[i]=j;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		k=a[0][i];
		for(j=0;j<5;j++)
		{
			if(a[j][i]<k)
			{
				k=a[j][i];
				y[i]=j;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==y[j]&&j==x[i])
			{
				g=0;
				my_printf("%d %d %d\n",i+1,j+1,a[i][j]);
			}
		}
	}
	if(g==1)
		my_printf("not found");
}

    


	
