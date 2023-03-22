#define NUM_ITER 218133

#include <header.h>

int main_bench()
{
	int a[5][5];
	int i,j,m,max,col,f=0,c;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	{
		max=a[i][0];
		col=0;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				col=j;
			}
		}
		for(m=0;m<5;m++)
		{
			c=0;
			if(m!=i)
			{
				if(max>=a[m][col])
				{
					c=1;
					break;
				}
			}
		}
		if(c==0)
		{
			my_printf("%d %d %d\n",i+1,col+1,max);
			f=1;
		}
	}
	if(f==0)
		my_printf("not found\n");
	return 0;
}