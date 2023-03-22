#include <header.h>

int main_bench()
{
	int a[20000],n,i,j,k=0,b[20000];
	my_scanf("%d",&n);
	i=n;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(j==i)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		my_printf("%d",b[i]);
		if(i-k+1)
			my_printf(" ");
	}
}