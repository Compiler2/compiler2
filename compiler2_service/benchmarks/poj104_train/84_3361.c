#define NUM_ITER 63354

#include <header.h>

int main_bench()
{
	int n,a[100],m1,i,m2,p,q;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	if(a[0]>a[1]) {m1=a[0];m2=a[1];}
	else {m1=a[1];m2=a[0];}
	for(i=2;i<n;i++)
	{
        p=m1;q=m2;
		if(a[i]>=p) {m2=m1;m1=a[i];}
	}
	my_printf("%d\n%d",m1,m2);
	return 0;
}