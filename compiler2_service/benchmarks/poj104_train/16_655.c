#define NUM_ITER 1652058

#include <header.h>

int main_bench()
{
	int n,j,k;
	int a[4];
    my_scanf("%d",&n);
	j=n;
	if(j<10)
		k=1;
	if(j>=10&&j<100)
		k=2;
	if(j>=100&&j<1000)
		k=3;
	if(j>=1000&&j<10000)
		k=4;
	a[3]=n/1000;
	a[2]=(n-a[3]*1000)/100;
	a[1]=(n-a[3]*1000-a[2]*100)/10;
	a[0]=n-a[3]*1000-a[2]*100-a[1]*10;
	switch(k)
	{
	case 1:
		my_printf("%d",a[0]);
		break;
	case 2:
		my_printf("%d%d",a[0],a[1]);
		break;
	case 3:
		my_printf("%d%d%d",a[0],a[1],a[2]);
		break;
	case 4:
		my_printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
		break;
	}
	return 0;
}