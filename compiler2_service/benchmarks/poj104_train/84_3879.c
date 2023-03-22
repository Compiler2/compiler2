#define NUM_ITER 49715

#include <header.h>

int main_bench()
{
	int n,a[100],i,m1=0,m2=0,j;
	my_scanf("%d",&n);
	for (i=0;i<n;i++) my_scanf("%d",&a[i]);
	for (i=0;i<n;i++) if (a[i]>m1) {m1=a[i]; j=i;}
	a[j]=0;
	for (i=0;i<n;i++) if (a[i]>m2) m2=a[i];
	my_printf("%d\n%d\n",m1,m2);
}
