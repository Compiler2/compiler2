#include <header.h>

int main_bench()
{ 
	int a[100000];
	int i,n,m,k,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&m);
	for(k=0,i=0;i<n-k;)
	{
		if(a[i]==m)
		{
			for(j=i;j<n-k-1;j++)
				a[j]=a[j+1];
			k++;
		}
		else i++;
	}
	for(i=0;i<n-k-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-k-1]);
}
