#include <header.h>

int main_bench()
{
	int n,i,j,k,a[300],b,c;
	my_scanf("%d",&n);
	for(i=0,k=0;i<n;i++)
	{
		my_scanf("%d",&b);
		c=1;
		for(j=0;j<k;j++)
		{
			if(a[j]==b)
			{
				c*=0;
				break;
			}
		}
		if(c)
			a[k++]=b;
	}
	for(i=0;i<k-1;i++)
		my_printf("%d,",a[i]);
	my_printf("%d",a[i]);
}