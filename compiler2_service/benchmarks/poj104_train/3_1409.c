#include <header.h>

int main_bench()
{
	int n,k,i,a[1000],c=0,s;
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=c;i<n;i++)
	{
		s=a[c]+a[i];
		if(s==k)
		{
			my_printf("yes");
			break;
		}
		if(i==n-1)
		{
			c=c+1;
			i=c;
		}
		if(c==n-1)
		{
			my_printf("no");
			break;
		}
	}
	return 0;
}