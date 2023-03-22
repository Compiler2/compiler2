#include <header.h>

int a[101],b[101],m,n;
int input()
{
	int i;
	my_scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
		my_scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		my_scanf("%d",&b[i]);
	return(0);
}
int pai()
{
	int i,j,p;
	for(j=1;j<m;j++)
	{
		for(i=1;i<=m-j;i++)
		{
			if(a[i]>a[i+1])
			{
				p=a[i];
				a[i]=a[i+1];
				a[i+1]=p;
			}
		}
	}
	for(j=1;j<n;j++)
	{
		for(i=1;i<=n-j;i++)
		{
			if(b[i]>b[i+1])
			{
				p=b[i];
				b[i]=b[i+1];
				b[i+1]=p;
			}
		}
	}
	return(0);
}
int print()
{
	int i;
	for(i=1;i<=m;i++)
		my_printf("%d ",a[i]);
	for(i=1;i<n;i++)
		my_printf("%d ",b[i]);
	my_printf("%d",b[n]);
	return(0);
}
int main_bench()
{
	input();
	pai();
	print();
}