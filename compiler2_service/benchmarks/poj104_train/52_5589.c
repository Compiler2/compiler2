#include <header.h>

int main_bench()
{
	int n,m,i,j;
	int a[100],c;
	int *b;
	my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	b=a+m;
	for(i=0;i<m;i++)
	{
		c=a[n-1];b=&a[n-1];
		for(j=n-1;j>0;j--)
		{
			*b=*(b-1);
            b=b-1;
		}
		a[0]=c;
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);

}