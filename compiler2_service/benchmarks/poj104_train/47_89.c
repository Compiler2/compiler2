#define NUM_ITER 56055

#include <header.h>

int main_bench()
{
	int n,s[100],b[100],i,j,a;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a);
		s[n+1-i]=a;
	}
	for(j=1;j<=n-1;j++)
	{
        my_printf("%d ",s[j]);
	}
	my_printf("%d",s[n]);
}