#include <header.h>

int main_bench()
{
	int a[20000],n,i,j,k;
	i=0;
	k=1;
	my_scanf("%d",&n);
	if(n==1)
	{
		my_scanf("%d",&a[i]);
	    my_printf("%d",a[i]);
	}
	else
	{
		my_scanf("%d",&a[i]);
	    my_printf("%d",a[i]);
		for(i=1;i<n;i++,k++)
	{
		my_scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(k<(n-1))
		{if(i==j)
		my_printf(" %d",a[i]);}
		else
		{
				for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
				if(i==j)
			my_printf(" %d",a[i]);
		}
	}}
	return 0;
}

