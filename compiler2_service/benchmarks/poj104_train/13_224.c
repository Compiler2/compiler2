#define NUM_ITER 8028

#include <header.h>

int main_bench()
{
	int n,i,m,k=0,t,a[20001];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++) my_scanf("%d",&a[i]);
	for(i=1;i<n-k;i++) 
	{
		for(m=1;m<=i;m++)
		{
			if(a[i]==a[i-m])
			{
			       t=i;
			       for(i=t;i<n-k;i++) a[i]=a[i+1];
			       i=t-1;
			       k++;
			}
		}
	}
	for(i=0;i<n-k-1;i++) my_printf("%d ",a[i]);
	my_printf("%d",a[n-k-1]);
}