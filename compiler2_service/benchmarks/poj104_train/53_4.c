#include <header.h>

int main_bench()
{
	int i,j,n,a[300]={0},u=0,k=0,b[300]={0};
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%d",a+i);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i]==b[j])
				break;
		}
		if(j==n)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<=k-2;i++)
		my_printf("%d,",b[i]);
	my_printf("%d\n",b[k-1]);
}