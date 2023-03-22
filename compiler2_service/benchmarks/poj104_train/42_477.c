#define NUM_ITER 44299

#include <header.h>

int main_bench()
{
		long a[1000000],t=0,i,j,n,m;
		my_scanf ("%ld\n",&n);
for (i=0;i<n;i++)
{
	my_scanf ("%ld",&a[i]);
}
my_scanf ("%ld",&m);
for (i=0,t=0;i<n;i++)
{
	if (a[i]==m) continue;
	else {a[n+t]=a[i];t++;}
}
for (i=n;i<n+t-1;i++)
{
	my_printf ("%ld ",a[i]);
}
if (t!=0)
my_printf ("%ld",a[n+t-1]);
}
