#define NUM_ITER 1348089

#include <header.h>


int main_bench()
{
	int i,j,n,a[5];
	my_scanf("%d",&n);
	i=1;
	if (n==0) my_printf("0");
	while (n>0)
	{
		a[i]=n%10;
		n=n/10;
		i=i+1;
	}
	for(j=1;j<i;j++) my_printf("%d",a[j]);
	return 0;
}