#define NUM_ITER 878704

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a[6]={0};
	a[0]=(n-n%100)/100;
	a[1]=(n%100-(n%100)%50)/50;
	a[2]=(n-100*a[0]-50*a[1]-(n-100*a[0]-50*a[1])%20)/20;
	a[3]=(n-100*a[0]-50*a[1]-20*a[2]-n%10)/10;
	a[4]=(n%10-(n%10)%5)/5;
	a[5]=n%5;
	int i;
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",a[i]);
	}
	return 0;
}