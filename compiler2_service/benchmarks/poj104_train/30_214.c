#define NUM_ITER 74970

#include <header.h>

int main_bench()
{
	int n,i,a[100],y;
	my_scanf("%d",&n);
	y=0;
	for(i=1;i<=n;i++)
		a[i]=i;
	for(i=1;i<=n;i++)
	{
		if(a[i]%7!=0&&(a[i]%10!=7&&a[i]/10!=7))
			y=y+a[i]*a[i];
	}
		my_printf("%d\n",y);
		return 0;
}                           
