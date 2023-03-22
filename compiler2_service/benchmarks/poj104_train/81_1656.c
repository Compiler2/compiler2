#define NUM_ITER 217416

#include <header.h>

int main_bench()
{
	int a[5][5],n,m,c,i,j,t;
	int f(int x,int y);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	c=f(n,m);
	if(c==0)
	{
		my_printf("error");
	}
	else
	{
	for(i=0;i<5;i++)
	{
		t=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=t;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<4)
			{
			my_printf("%d ",a[i][j]);
			}
			else my_printf("%d",a[i][j]);
			if(j==4)
			{
				my_printf("\n");
			}
		}
	}
	}
	return 0;
}



int f(int x,int y)
{
	if(x>=5||y>=5)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}