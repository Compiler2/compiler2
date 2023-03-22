#define NUM_ITER 7792

#include <header.h>

int main_bench()
{
	int a[300];
	int i,n,m,b,c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("\n");
	i=0;m=n-1;
	while(i<=m)
	{
		c=i+1;
		while(c<=m)
		{
			if(a[i]==a[c])
			{
				for(b=c;b<=m-1;b++)
				{a[b]=a[b+1];}
				m--;
			}
			else c++;
		}
		i++;
	}
	for(i=0;i<=m;i++)
	{
		my_printf("%d",a[i]);
		if(i<m)my_printf(",");
	}
	my_printf("\n");
}






	