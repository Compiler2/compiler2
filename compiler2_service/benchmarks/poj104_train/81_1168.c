#include <header.h>

int hanshu(int m,int n);
int main_bench()
{
	int a[5][5];
	int b[5]; 
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	int m,n;
	my_scanf("%d%d",&m,&n);
	if(hanshu(m,n)==1)
	{
		for(j=0;j<5;j++)
		{
			b[j]=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=b[j];
		}
		for(i=0;i<5;i++)
		{
		    for(j=0;j<4;j++)
			{
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d\n",a[i][4]);
		}
	}
	else
	{
		my_printf("error");
	}
	return 0;
}
int hanshu(int m,int n)
{
	int result;
	if(m>=0&&m<=4&&n>=0&&n<=4)
	{
		result=1;
	}
	else
	{
		result=0;
	}
	return result;
}