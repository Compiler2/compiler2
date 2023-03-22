#define NUM_ITER 3072

#include <header.h>

int main_bench()
{
	void move(int a[100],int n,int m);
	int n,m,i,a[100];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d\n",a[n-1]);
}

void move(int a[100],int n,int m)
{
	int i,d;
	d=a[n-1];
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
	a[0]=d;
	m--;
	if(m>0) move(a,n,m);
}
