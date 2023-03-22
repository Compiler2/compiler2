#include <header.h>

int main_bench()
{
	int a[501],b[501];
	int i,j=1,t,n,p,m=1;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]%2==1)
		{
			b[j]=a[i];
			j++;
			m++;
		}
	}
	for(p=1;p<m-1;p++)
	{
		for(j=1;j<m-p;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	my_printf("%d",b[1]);
	for(j=2;j<=m-1;j++)
	{
		my_printf(",%d",b[j]);
	}
	return 0;
}
