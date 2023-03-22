#include <header.h>

 
int main_bench()
{
	int a[100],n,m,i;
	int*p;
	my_scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=a;
	for(i=1;i<=m;i++)
	{
		int j,t;
		t=*(p+n-1);
		for(j=n-1;j>=1;j--)
		{
			*(p+j)=*(p+j-1);
		}
		*p=t;
	}
	for(i=1;i<=n-1;i++)
	{
		my_printf("%d ",*(p+i-1));
	}
	my_printf("%d",*(p+n-1));
	my_printf("\n");
}
