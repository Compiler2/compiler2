#define NUM_ITER 1365407

#include <header.h>

int main_bench()
{
	int n,a[5];
	my_scanf("%d",&n);
	a[0]=n%10;
	a[1]=((n-a[0])%100)/10;
	a[2]=((n-a[0]-a[1])%1000)/100;
	a[3]=((n-a[0]-a[1]-a[2])%10000)/1000;
	a[4]=(n-a[0]-a[1]-a[2]-a[3])/10000;
	if(a[4]!=0)
		my_printf("%d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4]);
	if(a[4]==0&&a[3]!=0)
		my_printf("%d%d%d%d\n",a[0],a[1],a[2],a[3]);
	if(a[4]+a[3]==0&&a[2]!=0)
		my_printf("%d%d%d\n",a[0],a[1],a[2]);
	if(a[4]+a[3]+a[2]==0&&a[1]!=0)
		my_printf("%d%d\n",a[0],a[1]);
	if(a[4]+a[3]+a[2]+a[1]==0)
		my_printf("%d\n",a[0]);
	return 0;
}