#define NUM_ITER 265014

#include <header.h>

int main_bench ()
{
	int n,i,j,a[100000];
	my_scanf("%d",&n);
	a[0]=n;
	if(n==1)
	{
		my_printf("End");
	}
	else 
	{
	for(i=1;i<=100000;i++)
	{
	if(a[i-1]%2!=0)
	{
		a[i]=a[i-1]*3+1;
		my_printf("%d*3+1=%d\n",a[i-1],a[i]);
	}
	if(a[i-1]%2==0)
	{
		a[i]=a[i-1]/2;
	my_printf("%d/2=%d\n",a[i-1],a[i]);
	}
	if(a[i]==1)
		break;
	}
	my_printf("End");
	}
	return 0;
}