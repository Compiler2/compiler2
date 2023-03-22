#define NUM_ITER 3387

#include <header.h>

int main_bench()
{
	int a[1000],b[1000000];
	int i,j,n,k,m=0,sum=0,c;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[m]=a[i]+a[j];
			m++;
		}
	}
	for(c=0;c<m;c++)
	{
		if(b[c]==k)
		{
			sum=sum+1;
		}
	}
	if(sum!=0)
	{
		my_printf("yes");
	}
	else my_printf("no");
	return 0;
}