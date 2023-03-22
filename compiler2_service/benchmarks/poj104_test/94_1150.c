#include <header.h>

int main_bench()
{
	
	int n,i,j,k,a[500],sum=0,b[500];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i-1]);
		if ((a[i-1]%2)!=0)
			{
				sum+=1;
				b[sum-1]=a[i-1];
		}
	}
	for(j=1;j<sum;j++)
		{
			for(i=1;i<sum-j+1;i++)
		{
			if(b[i-1]>b[i])
				{
					k=b[i-1];
					b[i-1]=b[i];
					b[i]=k;
			}}
	}

	for(i=1;i<=sum;i++)
		{
			my_printf("%d",b[i-1]);
			if(i==sum) break;
			my_printf(",");
	}
		return 0;
}