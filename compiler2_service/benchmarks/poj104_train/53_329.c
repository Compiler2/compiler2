#define NUM_ITER 7635

#include <header.h>

int main_bench()
{
	int a[300],b[300],i,j,t,n,m,f = 1;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);}
	b[0]=a[0];
	for(i=1,t=1,m=1;i<=n-1;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(a[i]!=a[j])
			{    f=1;
			}
			if(a[i]==a[j])
			{    f=0;
			     break;
			}
		}
		if(f==1)	
		{
			m=m+1;
			b[t]=a[i];
			t++;
		}	
	}
	
for(t=0;t<=m-2;t++)
{
	my_printf("%d,",b[t]);
}
my_printf("%d",b[m-1]);
}