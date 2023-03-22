#define NUM_ITER 58340

#include <header.h>

int main_bench()
{
	int n,m,i;
	int x[100];
	int *p,*head;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&x[i]);
	head=&x[0];
	p=&x[n-m];
	for(i=0;i<m;i++,p++)
		my_printf("%d ",*p);
	for(i=0;i<n-m-1;i++,head++)
		my_printf("%d ",*head);
	my_printf("%d\n",*(head++));
}