#define NUM_ITER 45739

#include <header.h>

int main_bench()
{
	int n,m,i,j,tr;
	int a[150];
	my_scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(i==1)
			my_scanf("%d",&a[i]);
		if(i!=1)
			my_scanf(" %d",&a[i]);
	}
	for(i=n+1-m;i<=n;i++)
	{
		for(j=i;j>=i-(n-m)+1;j--)
		{
			tr=a[j];
			a[j]=a[j-1];
			a[j-1]=tr;
		}		
	}
	for(i=1;i<=n;i++)
	{
		my_printf("%d",a[i]);
		if(i!=n)
			my_printf(" ");
	}
}