#include <header.h>

int main_bench()
{
	int i,j,k,m,n;
	int*p;
	p=(int*)malloc(200*sizeof(int));
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p+i);
	}
	for(i=0;i<n/2;i++)
	{
		m=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=m;
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",*(p+i));
	}
	my_printf("%d",*(p+n-1));
}
