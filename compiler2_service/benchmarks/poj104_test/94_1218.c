#define NUM_ITER 17412

#include <header.h>

int main_bench()
{
	int N,m,n,t,i,k;
	my_scanf("%d",&N);
	int b[500];
	int a[500];
	for(i=0;i<N;i++)
	{
		my_scanf("%d",&b[i]);
	}
	n=0;
	for(i=0;i<N;i++)
	{
		if(b[i]%2==1)
			n++;
	}
	k=0;
	for(i=0;i<N;i++)
	{
		if(b[i]%2==1)
		{
			a[k]=b[i];
			k++;
		}
	}
	for(m=0;m<n;m++)
	{
		for(i=m;i<n;i++)
		{	
			if(a[m]>a[i])
			{
				t=a[m];
				a[m]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d,",a[i]);
	}
	my_printf("%d",a[n-1]);
	return 0;
}