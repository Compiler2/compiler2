#define NUM_ITER 231891

#include <header.h>

int main_bench()
{
	int c[5][5];
	int i,j,m,n,p;
	int check(int c[][5],int,int);
	for (i=0;i<=4;i++)
	{
		for (j=0;j<=4;j++)
			my_scanf("%d",&c[i][j]);
	}
	my_scanf("%d",&m);
	my_scanf("%d",&n);
	p=check(c,m,n);
	if (p==1)
	{
		for (i=0;i<=4;i++)
		{
			for (j=0;j<=3;j++)
				my_printf("%d ",c[i][j]);
			my_printf("%d\n",c[i][4]);
		}
	}
	else if (p==0)
		my_printf("error\n");
}

int check(int c[][5],int m,int n)
{
	int j,f;
	int a[5];
	if (m<=4&&n<=4)
	{
		for (j=0;j<=4;j++)
			a[j]=c[m][j];
		for (j=0;j<=4;j++)
			c[m][j]=c[n][j];
		for (j=0;j<=4;j++)
			c[n][j]=a[j];
		f=1;
	}
	else
		f=0;
	return(f);
}