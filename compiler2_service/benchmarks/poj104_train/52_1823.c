#define NUM_ITER 47329

#include <header.h>

void error(int *p,int *q,int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		*(q+i)=*(p+n-m+i);
	for(i=0;i<n-m;i++)
		*(q+m+i)=*(p+i);
}
main_bench()
{
	int a[100],b[100],*p,*q,m,n,i;
	p=a;
	q=b;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p+i);
	}
	error(p,q,m,n);
	for(i=0;i<n-1;i++)
		my_printf("%d ",b[i]);
	my_printf("%d\n",b[n-1]);
}

