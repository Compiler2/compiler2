#define NUM_ITER 2701

#include <header.h>

int main_bench()
{
	int a[200];
	int i,j,n,m,temp,temp2;
	my_scanf("%d%d",&n,&m);
	for (i=1; i<=n; i++) my_scanf("%d",&a[i]);
	for (j=1; j<=m; j++) {
		temp=a[n];
		for (i=n; i>=2; i--) {
			temp2=a[i];
			a[i]=a[i-1];
			a[i-1]=temp2;
		}
		a[1]=temp;
	}
	for (i=1; i<n; i++) my_printf("%d ",a[i]);
	my_printf("%d",a[n]);
	return 0;
}