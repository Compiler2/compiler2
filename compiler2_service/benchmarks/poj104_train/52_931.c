#define NUM_ITER 9239

#include <header.h>

int a[100];
void move(int n,int m)
{
	int *p,last;
	last=a[n-1];
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
	*a=last;
	m--;
	if(m>0) move(n,m);
}

int main_bench()
{
	int i,m,n;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	move(n,m);
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
}

	

	