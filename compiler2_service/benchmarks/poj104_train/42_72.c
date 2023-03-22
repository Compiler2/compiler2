#include <header.h>

int main_bench()
{
	int n,i,j,l,d;
	my_scanf("%d",&n);
	long int a[100001];
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i-1]);
	}
	my_scanf("%d",&d);
	l=0;
	for(j=0;j<n;j++)
	{
		if(a[j]==d)
		{
			for(int k=j;k<n;k++)
			{
				a[k]=a[k+1];
			}
			l++;
		}
		if(a[j]==d)
			j--;
	}
	for(int m=0;m<n-l-1;m++)
	{
		my_printf("%d ",a[m]);
	}
	my_printf("%d",a[n-l-1]);
	return 0;
}