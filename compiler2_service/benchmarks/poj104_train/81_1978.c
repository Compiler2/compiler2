#define NUM_ITER 232849

#include <header.h>

int main_bench()
{
	int a[5][5];
	int n,m;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	int fuc(int a[5][5],int n,int m);
	if(fuc(a,n,m))
	{
		for(i=0;i<5;i++)
		{
			int tmp;
			tmp=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=tmp;
		}
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<4)
			my_printf("%d ",a[i][j]);
			else 
			{
			my_printf("%d",a[i][4]);
			my_printf("\n");
			}
		}
	}
	}
	else
		my_printf("error");
	return 0;
}
int fuc(int a[5][5],int n,int m)
{
	if(n<=4&&m<=4)
		return 1;
	else
		return 0;
}
