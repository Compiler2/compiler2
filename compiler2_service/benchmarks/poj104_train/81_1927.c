#include <header.h>

int main_bench()
{
	int a[100][100],m,n,i,j,temp;
	for (i=0;i<=4;i++)
		for (j=0;j<=4;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&m,&n);
	if (m<=4&&n<=4&&m!=n)
	{
		for (j=0;j<5;j++)
		{
			temp=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=temp;
		}
	    for (i=0;i<5;i++)
		{
			for (j=0;j<4;j++)
			{
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d",a[i][j]);
			my_printf("\n");
		}
	}
	else my_printf("error");
	return 0;
}