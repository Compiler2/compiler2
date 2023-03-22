#define NUM_ITER 56799

#include <header.h>




int main_bench()
{
	int n,m=0,i=0;
	int a[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[n-1]);
	for(m=n-2;m>=0;m--)
	{
		my_printf(" %d",a[m]);
	}
return 0;	
}