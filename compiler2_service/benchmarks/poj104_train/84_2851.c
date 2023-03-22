#include <header.h>

int main_bench()
{
	int a[101];
	int i,j,k,n,max,m;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	max=a[1];
	for(j=1;j<=n;j++)
	{
		if(max<a[j])
			max=a[j];
	}
	m=a[1];
	for(k=1;k<=n;k++)
	{
		if((a[k]<max)&&(m<a[k]))
			m=a[k];
	}
	my_printf("%d\n",max);
	my_printf("%d",m);
}