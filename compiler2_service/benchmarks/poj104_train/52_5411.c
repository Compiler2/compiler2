#define NUM_ITER 3033

#include <header.h>

int main_bench()
{
	int t[105];
	int n,m;
	int *tt[105];
	my_scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i ++){
		my_scanf("%d",&t[i]);
		tt[i] = &t[i];
	}
	for(int i = 1;i <= m;i ++){
		int p = *tt[n];
		for(int j = n;j >= 2;j --)
			*tt[j] = *tt[j-1];
		*tt[1] = p;
	}
	my_printf("%d",t[1]);
	for(int i =2;i <= n;i ++) my_printf(" %d",t[i]);
	my_printf("\n");
	return 0;
}