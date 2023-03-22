#include <header.h>

int main_bench()
{
	int n,tot=0,i,j,swap;
	int a[202];
	my_scanf("%d",&n);
	for (i=1;i<=n;i++){
		my_scanf("%d",&a[i]);
		tot+=a[i];
	}
	for (i=1;i<=n;i++){
		for (j=i+1;j<=n;j++){
			if (a[i]>a[j]) {
				swap=a[i];a[i]=a[j];a[j]=swap;
			}
		}
	}
	if ((a[1]+a[n])*n==tot*2) {
		my_printf("%d,%d",a[1],a[n]);
	}
	if ((a[1]+a[n])*n>tot*2) {
		my_printf("%d",a[n]);
	}
	if ((a[1]+a[n])*n<tot*2) {
		my_printf("%d",a[1]);
	}

	return 0;
}

