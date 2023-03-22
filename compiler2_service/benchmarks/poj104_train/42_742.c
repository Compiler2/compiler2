#define NUM_ITER 46509

#include <header.h>

int main_bench()
{
	int a[100000],n,i,t,k,m=0,*p;
	my_scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		my_scanf("%d",&*(p+i));
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(*(p+i)==k)
		{
		for(t=i;t<n;t++)
			*(p+t)=*(p+t+1);
		m=m+1;
		i=i-1;
		}
	}
	for(i=0;i<n-1-m;i++)
		my_printf("%d ",*(p+i));
	my_printf("%d",*(p+i));
	return 0;
}