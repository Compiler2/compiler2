#define NUM_ITER 40247

#include <header.h>

struct n
{
	int pi;
	struct n * next;
}num[100];
int main_bench()
{
	int a[100],i,n,m;
	struct n *p;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		num[i].pi=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		num[i].next=&num[i+1];
	}
	num[n-1].next=&num[0];
	p=&num[n-m];
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",p->pi);
		p=p->next;
	}
	my_printf("%d\n",p->pi);
}
