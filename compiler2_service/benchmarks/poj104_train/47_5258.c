#define NUM_ITER 51717

#include <header.h>

int main_bench()
{
	int n,a[100],*p,*j,i,temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(p=a,j=a+n-1;p<a+n/2;p++,j--)
	{
		temp=*p;
		*p=*j;
		*j=temp;
	}
	for(p=a;p<a+n-1;p++)
		my_printf("%d ",*p);
	my_printf("%d",*p);

}