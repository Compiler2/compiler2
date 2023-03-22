#include <header.h>

int main_bench()
{
	int a[5][5]={0},m,n,i,j,p;
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		my_scanf("%d",&a[i][j]);
	}
	}
	my_scanf("%d",&n);
	my_scanf("%d",&m);
	if(n>=0&&n<5&&m>=0&&m<5)
	{
	for(i=0;i<5;i++)
	{
		p=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=p;
	}
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		my_printf("%d",a[i][j]);
		if(j==4)
		{
		break;
		}
		my_printf(" ");
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