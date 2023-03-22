#define NUM_ITER 57961

#include <header.h>

int main_bench()
{
	int a[100]={-1},*p,*q,n,m,i,k=0;
	my_scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=a;
	q=p+n-m+1;
	my_printf("%d",*(p+n-m));	
	while(k<n-1)
	{
		if(*q==0)q=p;
		my_printf(" %d",*q);
		k++;
		q++;		
	}
	return 0;
}