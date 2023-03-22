#define NUM_ITER 44208

#include <header.h>

void f(int a[],int n,int m,int i)
{
	if(i==n)
		return;
	int c,j;
	if(i<m)
		j=n-m+i;
	else
		j=i-m;
	c=a[j];
	f(a,n,m,i+1);
	a[i]=c;
	return;
}
int main_bench()
{
	int a[100],n,m,i;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	f(a,n,m,0);
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[i]);
}