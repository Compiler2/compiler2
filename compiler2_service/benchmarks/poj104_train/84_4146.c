#define NUM_ITER 5122

#include <header.h>


int main_bench()
{
	int a[100],t;
	int i,j,n;

    my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
			    a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}

	my_printf("%d\n%d\n",a[0],a[1]);
	return 0;
}

