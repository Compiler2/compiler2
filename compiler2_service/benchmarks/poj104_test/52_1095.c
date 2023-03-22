#define NUM_ITER 50706

#include <header.h>

int main_bench()
{
	int a[100],*p,*q,b,n,m,i;
	my_scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=a;
	q= (int*)malloc(n*sizeof(int));
	for(i=n-m;i<n;i++)
		*(q+i+m-n)=*(p+i);
	for(i=0;i<n-m;i++)
		*(q+i+m)=*(p+i);
	for(i=0;i<n-1;i++)
		my_printf("%d ",*(q+i));
	my_printf("%d",*(q+n-1));
	free (q);
	return 0;
}
