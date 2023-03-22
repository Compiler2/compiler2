#define NUM_ITER 57364

#include <header.h>

int main_bench()
{
    int i,b,n,b1;
	my_scanf("%d",&n);
	int a[100];
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i-1]);
    b=a[0];
	b1=a[0];
	for(i=2;i<=n;i++)
	{
		if(b<a[i-1])
		{
			b1=b;
			b=a[i-1];
		}
		else if( b1<a[i-1] )
			b1 = a[i-1];
	}
	my_printf("%d\n%d\n",b,b1);
}