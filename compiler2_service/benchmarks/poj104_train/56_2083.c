#define NUM_ITER 1271933

#include <header.h>

int main_bench()
{
	int m=0,n,a[6]={0},i;
	my_scanf("%d",&n);
	for(i=0;i<=5;i++)
	{
		a[i]=n%10;
		n=n/10;
		
		m=m*10+a[i];
		if(n==0)
			break;
	}
	my_printf("\n%d",m);
}