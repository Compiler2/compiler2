#define NUM_ITER 50149

#include <header.h>

int main_bench()
{
	int n,i,m[100],t=0,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&m[i]);
	for(i=0;i<n/2;i++)
	{
		j=n-i-1;
		t=m[i];
		m[i]=m[j];
		m[j]=t;
	}
	my_printf("%d",m[0]);
	for(i=1;i<n;i++)
		my_printf(" %d",m[i]);
	return 0;
}