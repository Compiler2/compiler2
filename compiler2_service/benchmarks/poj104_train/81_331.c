#include <header.h>

int main_bench()
{
	int can(int n,int m);
	void change(int a[5][5],int n,int m);
	int i,j,m,n;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(can(n,m))
	{
		change(a,n,m);
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d",a[i][4]);
			my_printf("\n");
		}
	}
	if(can(n,m)==0)
		my_printf("error");
}
int can(int n,int m)
{
	
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		return(1);
	}
	if(n<0||n>=5||m<0||m>=5)
	{
		return(0);
	}
}
void change(int a[5][5],int n,int m)
{
	int i,temp;
	for(i=0;i<5;i++)
	{
		temp=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=temp;
	}
}
