#include <header.h>

int main_bench()
{
	int a[5][5]={0};
	int b[5]={0};
	int n, m;
    int i,j;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			my_scanf("%d", &a[i][j]);
		}
	}
	my_scanf("%d%d", &n, &m);
	if (n>=0&&n<=4&&m>=0&&m<=4)
	{
		for(j=0;j<5;j++)
		{
			b[j]=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=b[j];
		}
		for (i=0;i<5;i++)
		{
			for (j=0;j<4;j++)
			{
				my_printf("%d ", a[i][j]);
			}
			if (j=4)
				my_printf("%d\n", a[i][j]);
		}
	}
	else my_printf("error");
}

