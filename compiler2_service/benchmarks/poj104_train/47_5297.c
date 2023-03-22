#include <header.h>


int main_bench()
{
	int a[1000],*p,n,i,t;
	my_scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++,p++)
		my_scanf("%d",p);
	for(i=n-1;i>0;i--)
		my_printf("%d ",*(p+i-n));
	my_printf("%d",*(p-n));
}


 

 