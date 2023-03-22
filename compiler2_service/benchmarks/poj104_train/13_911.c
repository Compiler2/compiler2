#include <header.h>

int main_bench()
{
		int i,j,n,a[20000],b[20000];
	my_scanf("%d",&n);
	my_scanf("%d",&a[1]);
	my_printf("%d",a[1]);
	for(i=2;i<=n;++i)
	{
		my_scanf("%d",&a[i]);
		for(j=1;j<=i-1;++j)
		{
			b[i-1]=0;
			b[j]=a[j]-a[i];
			if(b[j]==0)break;
		}
		if(b[i-1]!=0)my_printf(" %d",a[i]);
	}
	return 0;
}
