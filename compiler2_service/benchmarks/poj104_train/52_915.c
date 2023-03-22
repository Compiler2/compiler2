#include <header.h>


int main_bench()
{
	int n,m,*p,*q,i;
	int a[100];
	
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	p=a;
	q=a+n-1;
    for(i=0;i<n-m;i++)
	{ 
		*(q+1)=*p;	q++;p++;
	}
    for(i=0;i<n;i++)
		*(a+i)=*(p+i);
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
}