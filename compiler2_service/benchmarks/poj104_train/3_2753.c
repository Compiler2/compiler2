#define NUM_ITER 11712

#include <header.h>

int main_bench()
{
	int n,k,i,j,s=0;
	int *a;
	my_scanf("%d %d",&n,&k);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<=n-2;i++)
		for(j=1+i;j<=n-1;j++)
			if(a[i]+a[j]==k)
			{
				s=1;
				break;
			}
	if(s==1)
		my_printf("yes\n");
	else
		my_printf("no\n");
	return 0;
}
