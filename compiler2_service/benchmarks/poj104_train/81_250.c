#define NUM_ITER 209364

#include <header.h>

int main_bench()
{
	int a[6][5];
	int i, j, n, m;
	for (i = 0;i <= 4;i++)
		for (j = 0;j <= 4;j++)
			my_scanf("%d",&a[i][j]);			
	my_scanf("%d%d",&n,&m);
	if (n >= 0 && n <= 4 && m >= 0 && m <= 4)
	{
		for (i = 0;i <= 4;i++) 
		{	
			a[5][i] = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = a[5][i];
		}
	
		for (i = 0;i <= 4;i++)
			for (j = 0;j <= 4;j++)
			{
				if (j < 4)	my_printf("%d ",a[i][j]);
				else if (i < 4) my_printf("%d\n",a[i][j]);
				else my_printf("%d",a[i][j]);
			}
	}
	else my_printf("error"); 
	return 0;
}