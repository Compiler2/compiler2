#include <header.h>

int main_bench()
{
	int a[101];
	int n,m,i;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	int j,k,t;
	for(j=1;j<=m;j++)
	for(k=n-1;k>=0;k--)
	{
		if(k==n-1)
		{
			t=a[k];
			a[k]=a[k-1];
		}
		else if(k==0)
			a[k]=t;
		else
			a[k]=a[k-1];
	}
	int l;
	for(l=0;l<n-1;l++)
		my_printf("%d ",a[l]);
	my_printf("%d",a[n-1]);
	return 0;
}