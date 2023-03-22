#include <header.h>

int main_bench()
{
	int i,k,n,a[300],temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(k=0;k<n-i-1;k++)
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
			my_printf("%d\n%d\n",a[n-1],a[n-2]);
}