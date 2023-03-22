#include <header.h>

change(int *p,int *q,int n)
{
	int t;
	for(;p<=q;p++,q--)
	{
		t=*p;
		*p=*q;
		*q=t;
	}	
		 return;
}
int main_bench()
{
	int n,a[1000],*p,i,*q;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=a;
	q=a+n-1;
   change(p,q,n);
	 for(i=0;i<n-1;i++)
		 my_printf("%d ",*(p+i));
	 my_printf("%d",*(p+i));
}