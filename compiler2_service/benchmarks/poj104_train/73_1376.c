#define NUM_ITER 176451

#include <header.h>

int main_bench()
{
	int sum,n,m,i,j;
	int a[5][5];
	sum=0;
	int b[5],c[5];
	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			my_scanf("%d",&a[m][n]);
		}
	}
	for(i=0;i<5;i++)
	{
		b[i]=a[i][0];
		for(j=0;j<5;j++)
		{
			if(b[i]<a[i][j])
			{
				b[i]=a[i][j];
			}
		}
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[0][i];
		for(j=0;j<5;j++)
		{
			if(c[i]>a[j][i])
			{
				c[i]=a[j][i];
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==b[i]&&a[i][j]==c[j])
			{
				my_printf("%d %d %d\n",i+1,j+1,a[i][j]);
				sum=sum+1;
			}
		}
	}
	if(sum==0)
	{
		my_printf("not found");
	}
	return 0;
}
