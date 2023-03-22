#include <header.h>

int main_bench()
{
	int n,k;
	int s=0;
	int i,j;
	int a[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	     my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<n)
		{
			if(i==j)
			{
				j++;
				continue;
			}
			else
			{
				s=a[i]+a[j];
				j++;
				if(k==s)
				{
					my_printf("yes");
					goto label;
				}
			};
		};
		if((i==n-1)&&(s!=k))
			my_printf("no");
	}
    label:
	return(0);
}