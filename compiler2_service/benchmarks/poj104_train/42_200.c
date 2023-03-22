#include <header.h>

int main_bench()
{
	int i,j,k,m,n,num=0;
	my_scanf("%d",&n);
	int a[100001];
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		{
			m=i;
			for (j=i+1;j<n+1;j++,i++)
				a[i]=a[j];
			i=m-1;
			num=num+1;
		}
	}
	for(i=0;i<(n-num-1);i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-num-1]);
	return 0;
}