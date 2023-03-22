#define NUM_ITER 1596361

#include <header.h>

int main_bench()
{
	int t,a[4],i;
	my_scanf("%d",&t);
	a[0]=t/10000;
	a[1]=(t-a[0]*10000)/1000;
	a[2]=(t-a[0]*10000-a[1]*1000)/100;
    a[3]=(t-a[0]*10000-a[1]*1000-a[2]*100)/10;
	a[4]=t-a[0]*10000-a[1]*1000-a[2]*100-a[3]*10;
	for(i=4;a[i]!=0&&i>=0;i--)
	my_printf("%d",a[i]);
}
