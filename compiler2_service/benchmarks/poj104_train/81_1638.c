#include <header.h>


int function(int a[][5], int n, int m)
{
	if((m<0||m>4)||(n<0||n>4))
	{
		return 0;
	}
	else
	{
		int i;
		for(i=0;i<5;i++)
		{
			int temp=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=temp;
		}
		return 1;
	}
}

int main_bench()
{
	int a[5][5], n, m;
	int i, j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d", &a[i][j]);
		}
	}
	my_scanf("%d%d", &n, &m);
	
	int b=function(a,n,m);
	if(b==0)
	{
		my_printf("error");
	}
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j<4)
				{
					my_printf("%d ", a[i][j]);
			
				}
				else
				{
					my_printf("%d\n",a[i][j]);
				}
			}
		}
	}
	return 0;
	
	
}