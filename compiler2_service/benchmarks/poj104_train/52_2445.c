#include <header.h>

int main_bench()
{
	int *p,*q;
	int i,j,m,n;
	my_scanf("%d %d",&n,&m);
	p=(int *)malloc(n*sizeof(int));
	q=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++)
		my_scanf("%d",(p+i));
	for(j=0;j<m;j++)
	{
		*q=*(p+n-1);
		for(i=n-1;i>0;i--)
			*(p+i)=*(p+i-1);
		
		*p=*q;
	}
	my_printf("%d",*p);
	for(i=1;i<n;i++)
		my_printf(" %d",*(p+i));
	my_printf("\n");
}