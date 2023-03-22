#define NUM_ITER 46811

#include <header.h>

int main_bench()
{
	int a[100];
	int t[100];
	int n,m,i,j,h;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	j=n-m;
	for(i=0;i<m;i++)
	{
		t[i]=a[j];
		j=j+1;
	}
	h=0;
	for(i=m;i<n;i++)
	{
		t[i]=a[h];
		h=h+1;
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",t[i]);
	my_printf("%d",t[n-1]);
}