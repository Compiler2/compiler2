#include <header.h>

int main_bench()
{
	int n,a[20000]={'\0'},i=0,j=0,k=0,temp,count;
	my_scanf("%d",&n);
	my_scanf("%d",&a[0]);
	my_printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	{
		my_scanf("%d",&temp);
		count=0;
		for(j=0;j<=k;j++)
		{
			if(temp==a[j])
				break;
			else
				count++;
		}
		if(count==k+1)
		{
			k++;
			a[k]=temp;
		}
	}
	for(i=1;a[i]!='\0';i++)
		my_printf(" %d",a[i]);
}