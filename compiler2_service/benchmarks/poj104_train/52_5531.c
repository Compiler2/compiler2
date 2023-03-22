#include <header.h>

void lunhuan(int b[],int c,int d)
{
	int i,j,t;
	for(i=c-d;i<=c-1;i++)
	{
		for(j=1;j<=c-d;j++)
		{
			t=b[i-j+1];
			b[i-j+1]=b[i-j];
			b[i-j]=t;
		}
	}
}
int main_bench()
{
	int a[101],n,m,i;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	lunhuan(a,n,m);
	for(i=0;i<=n-1;i++)
	{
		if (i==0)
			my_printf("%d",a[i]);
		else
		my_printf(" %d",a[i]);
	}
	return 0;
}