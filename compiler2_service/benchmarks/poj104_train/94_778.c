#include <header.h>

int main_bench()
{
	int n,i,k=0,j=0,temp;
	int a[500]={0};
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(j==0&&a[i]%2==1)
		{
			my_printf("%d",a[i]);
			j=1;
		}
		else if(j!=0&&a[i]%2==1)
		{
			my_printf(",%d",a[i]);
		}
	}
	return(0);
}