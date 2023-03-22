#define NUM_ITER 48815

#include <header.h>

int main_bench()
{
	long int i,j,a[100000],*p,n,m,k;
	my_scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p++);
	}
	p=a;
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if((*p)==k)
		{
			for(j=0;j<n-i-1;j++)
				*(p+j)=*(p+j+1);
			n=n-1;
			p--;
			i--;
		}
		p++;
	}
	p=a;
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",*p);
		p=p+1;
	}
	my_printf("%d",*p);
}