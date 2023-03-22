#define NUM_ITER 222809

#include <header.h>

int panduan(int a[5][5],int n,int m)
{
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void diaohuan(int a[5][5],int n,int m)
{
	int i,j,temp;
	if(panduan(a,n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			temp=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=temp;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==4)
				{
					my_printf("%d\n",a[i][j]);
				}
				else
				{
					my_printf("%d ",a[i][j]);
				}
			}
		}
	}
}
int main_bench()
{
	int juzhen[5][5],n,m,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&juzhen[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(panduan(juzhen,n,m)==0)
	{
		my_printf("error\n");
	}
	else if(panduan(juzhen,n,m)==1)
	{
		diaohuan(juzhen,n,m);
	}
	return 0;
}

