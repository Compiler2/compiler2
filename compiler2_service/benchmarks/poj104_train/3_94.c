#include <header.h>

int main_bench()
{
	int n,k,i,j,m;
	int a[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			m=a[i]+a[j];
			if(m==k)
			{
				my_printf("yes");
				break;
			}
		}
		if(m==k) break;
		if(i==n-1&&m!=k)
			my_printf("no");
	}
	
		
	
	return 0;
}