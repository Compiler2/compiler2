#define NUM_ITER 87296

#include <header.h>

int main_bench()
{
	int a[300],i, j, sum=0, temp;
	char c;
	int n=1;
    for(i=0;;i++)
	{
		my_scanf("%d",&a[i]);
		if((c=getchar())=='\n')
			break;
	n++;
	}
	if(n==1)
		my_printf("No");
	else
	{
		for(i=1;i<=n-1;i++)
			sum+=(a[0]-a[i])*(a[0]-a[i]);
		if(sum==0)
			my_printf("No");
		else
		{
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j]>=a[j+1])
			{
				temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
		}
	}
	for(i=n-2;i>=0;i--)
	{
		if(a[i]-a[n-1]!=0)
		{
			my_printf("%d\n",a[i]);
		break;
		}
	}
}