#include <header.h>

int main_bench()
{
	int a[5][5],e[5];
	int m,n;
	int i,j;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);
	
	if(n>=0&&n<5&&m>=0&&m<5)
		{
		for(i=0;i<5;i++)
			{
				
				e[i]=a[n][i];
			}
			for(i=0;i<5;i++)
			{
				
				a[n][i]=a[m][i];
			}
			for(i=0;i<5;i++)
			{
				
				a[m][i]=e[i];
			}
			for(i=0;i<5;i++)
		{
		for(j=0;j<5;j++)
		{
			if(j!=4)
				my_printf("%d ",a[i][j]);
			else 
				my_printf("%d",a[i][j]);
			
		}my_printf("\n");
		}
	}
	else
	{
		my_printf("error");
	}

	return 0;
}


