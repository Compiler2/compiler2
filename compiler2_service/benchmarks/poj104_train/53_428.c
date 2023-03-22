#include <header.h>

int main_bench()
{
    int i,n,a[400],b[400],j,k,m;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{my_scanf("%d",&a[i]);}
    for(m=0,i=0;i<=n-1;i++)
	{
		for(j=0,k=1;j<=i-1;j++)
		{if (a[i]==a[j])
		{k=0;break;}
		}
		if(k!=0)
		{b[m]=a[i];m++;}
	}
	for(i=0;i<=m-2;i++)
	{ my_printf("%d,",b[i]);};
	my_printf("%d",b[m-1]);
}

