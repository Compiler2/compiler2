#define NUM_ITER 3083

#include <header.h>

int main_bench()
{
	int a[100],n,m,tem,i,j;
	int*p;
	p=&a[0];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",p++);
	p=a;
	for(i=0;i<m;i++)
	{
		tem=p[n-1];
		for(j=n-1;j>0;j--)
			p[j]=p[j-1];
		p[0]=tem;
	}
	p=&a[0];
	for(i=0;i<n-1;i++,p++)
		my_printf("%d ",*p);
	my_printf("%d",*p);
}