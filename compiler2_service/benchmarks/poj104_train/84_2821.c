#define NUM_ITER 41275

#include <header.h>

int main_bench()
{
	int i,n,a[100],m1=0,m2=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
		my_scanf("%d\n",&a[i]);
	for(i=0;i<n;i++)
		m1=m1>a[i]?m1:a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==m1)continue;
		else m2=m2>a[i]?m2:a[i];
	}
	my_printf("%d\n%d\n",m1,m2);
}
