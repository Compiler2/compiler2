#define NUM_ITER 53615

#include <header.h>

main_bench()
{
	int a[201],n,m,i;
	my_scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++) my_scanf("%d",&a[i]);
	for(i=n+1;i<=2*n-m;i++) a[i]=a[i-n];
	for(i=n-m+1;i<=2*n-m;i++) {if(i!=n-m+1) my_printf(" ");my_printf("%d",a[i]);}
}