#include <header.h>

int main_bench()
{
	int n,i,j,k,a[100]={0};
	float sum=0;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	sum=sum/n;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j+1]<a[j])
			{
				k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
		}
	}
	if(sum-a[0]==a[n-1]-sum)
		my_printf("%d,%d\n",a[0],a[n-1]);
	else
		my_printf("%d\n",(sum-a[0]>a[n-1]-sum)?a[0]:a[n-1]);
}