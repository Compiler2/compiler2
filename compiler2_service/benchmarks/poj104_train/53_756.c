#include <header.h>

int main_bench()
{
	int a[300],b[300];
	int *p,i,j,n,k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) break;
		}
		if(j==i)
		{
			*p++=a[i];
			k++;
		}
		else continue;
	}
	p=b;
	for(i=0;i<k-1;i++)
		my_printf("%d,",*p++);
	my_printf("%d",*p);
}
