#define NUM_ITER 50128

#include <header.h>

int main_bench()
{
	int *p,a[100],i,m,n;
	my_scanf("%d %d",&n,&m);
	p=a+m;
	for(i=0;i<n-m;i++)
	{
		my_scanf("%d\t",p++);
	}
	p=a;
	for(i=0;i<m;i++)
	{
		my_scanf("%d\t",p++);
	}
	p=a;
	my_printf("\n");
	for(i=0;i<n;i++)
	{
           if(i!=n-1)
            {
		my_printf("%d ",a[i]);}
           if(i==n-1)
            {
		my_printf("%d",a[i]);}
	}
}