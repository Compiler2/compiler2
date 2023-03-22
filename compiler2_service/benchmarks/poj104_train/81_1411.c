#include <header.h>



int main_bench()
{
	int juzhen[5][5];
	int i,j;
	int m,n;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&juzhen[i][j]);
		}
	}
	
	my_scanf("%d%d",&m,&n);
	
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		int a[5],i;
		for(i=0;i<5;i++)
		{
			a[i]=juzhen[m][i];
			juzhen[m][i]=juzhen[n][i];
			juzhen[n][i]=a[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==4)
					my_printf("%d",juzhen[i][j]);
				else
					my_printf("%d ",juzhen[i][j]);
			}
			my_printf("\n");
		}	
	}
	else
		my_printf("error");

	return 0;
}