#define NUM_ITER 5462

#include <header.h>

int main_bench()
{
	int a[100];
	int n,i,j,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(j=0;j<n-1;j++)
		for(i=0;i<n-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	my_printf("%d\n%d\n",a[n],a[n-1]);
}