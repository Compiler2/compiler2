#include <header.h>

int main_bench()
{
	int a[100000];
	int n,i,k,j,m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&k);
	for(j=0,i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			a[j]=a[i];
			j++;
		}
	}
	for(m=0;m<j-1;m++)
	{
		my_printf("%d ",a[m]);
	}
	my_printf("%d",a[j-1]);
}
