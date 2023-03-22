#include <header.h>

int main_bench()
{
	int n,k,i,j;
	int a[1000],b[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+b[j]==k)
			{
				my_printf("yes");
			    return 0;
			}
		}
	}
my_printf("no");
return 0;
}
