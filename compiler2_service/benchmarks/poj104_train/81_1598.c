#include <header.h>

void q(int a[5][5],int m,int n)
{
	int i,b;
	for(i=0;i<5;i++)
	{
		b=a[m][i];
		a[m][i]=a[n][i];
		a[n][i]=b;
	}
}
int main_bench()
{
	int a[5][5],i,j,c,d,e;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	int m,n;
	my_scanf("%d %d",&m,&n);
	if(m>=5||n>=5)
	{
		my_printf("error\n");
		return 0;
	}
	else
	{
		q(a,m,n);
	
	for(i=0;i<5;i++)
	{
		my_printf("%d",a[i][0]);
	
		for(j=1;j<5;j++)
		{
			my_printf(" %d",a[i][j]);
		}
		my_printf("\n");
	}
	}
	return 0;
}
	


