#include <header.h>

int main_bench()
{
	int a[100],*p,n,i,j,m,t;
	p=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&*(p+i));
	m=(n)/2;
    for(i=0;i<m;i++)
	{
		j=n-i-1;
		t=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=t;
	}

	for(i=0;i<n-1;i++)
		my_printf("%d ",*(p+i));
	my_printf("%d",*(p+n-1));
}