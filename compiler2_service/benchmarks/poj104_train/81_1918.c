#include <header.h>


int main_bench()
{
	int a[10][10];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	int n,m;
	my_scanf("%d%d",&n,&m);
	if((m>=0&&m<5)&&(n>=0&&n<5))
	{
		int t[1][5];
	
			for(j=0;j<5;j++)
			{
				t[0][j]=a[n][j];
			}
		    for(j=0;j<5;j++)
			{
				a[n][j]=a[m][j];
			}
			for(j=0;j<5;j++)
			{
				a[m][j]=t[0][j];
			}
	

		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
				{
				if(j==4)
				{
					my_printf("%d",a[i][j]);
				}
				else
				my_printf("%d ",a[i][j]);
			}
			my_printf("\n");
		}
	}
	else
	{
		my_printf("error");
	}

	return 0;
}
