#define NUM_ITER 217537

#include <header.h>

int down(int m,int n);
int main_bench()
{
	int a[5][5],m,n,i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);
	if(down(m,n)==0)
		my_printf("error");
	else
	{
		for(i=0;i<=4;i++)
		{
			if(i==m)
			{
				for(j=0;j<=3;j++)
				my_printf("%d ",a[n][j]);
				my_printf("%d",a[n][4]);
				my_printf("\n");
			}
			if(i==n)
			{
				for(j=0;j<=3;j++)
				my_printf("%d ",a[m][j]);
				my_printf("%d",a[m][4]);
				my_printf("\n");
			}
			else if(i!=m&&i!=n)
			{
				for(j=0;j<=3;j++)
			{
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d",a[i][4]);
			my_printf("\n");
			}
		}
	}
}
int down(int m,int n)
{
	if(m<=4&&m>=0&&n<=4&&n>=0)
		return(1);
	else
		return(0);
}
