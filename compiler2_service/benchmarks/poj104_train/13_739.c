#include <header.h>


main_bench()
{
	int a[105],n,i;
	for (i = 0;i < 101;i += 1)
		a[i] = 0;
	my_scanf("%d",&n);
	my_scanf("%d",&i);
	a[i] = 1;
	my_printf("%d",i);
	while(n-- > 1){
		my_scanf("%d",&i);
		if(a[i]) continue;
		a[i] = 1;
		my_printf(" %d",i);
	}
}

