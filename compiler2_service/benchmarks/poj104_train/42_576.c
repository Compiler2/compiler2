#include <header.h>

int main_bench()
{
int n,k,i,j,sum=0;
int a[100000];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
	my_scanf("%d",&a[i]);
}
my_scanf("%d",&k);
for(i=0;i<n-sum;i++)
{
	if(a[i]==k)
	{
		for(j=i+1;j<n-sum;j++)
		{
			a[j-1]=a[j];
		}
		sum=sum+1;
		i--;
	}
}
for(i=0;i<n-sum-1;i++)
{
	my_printf("%d ",a[i]);
}
my_printf("%d",a[n-sum-1]);
}