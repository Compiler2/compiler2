#define NUM_ITER 54810

#include <header.h>

int main_bench()
{
	int a[100],n,i,*j,*k,*p,temp,m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",a+i);
    m=(n-1)/2;
	j=a;k=a+n-1;p=a+m;
	for(;j<=p;j++,k--)
	{temp=*j;
	*j=*k;
	*k=temp;
	}
    for(i=0;i<n-1;i++)
	my_printf("%d ",*(a+i));
    my_printf("%d",*(a+n-1));
}