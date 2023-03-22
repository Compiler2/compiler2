#define NUM_ITER 53098

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,u,a[100];
	for(i=0;i<=n-1;i++){
		my_scanf("%d",&u);
		a[n-1-i]=u;
	}
	my_printf("%d",a[0]);
	for(i=1;i<=n-1;i++){
		my_printf(" %d",a[i]);	
	}
	return 0;
}