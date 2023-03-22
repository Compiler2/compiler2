#include <header.h>

int main_bench()
{
	int n,a[300],i,j,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=1;i<n;i++)
		for(j=0;j<=i-1;j++)
			if(a[i]==a[j]) a[i]=1000000;
	for(i=0;i<n;i++)
		if(a[i]!=1000000) k=i;
	for(i=0;i<k;i++)
		if(a[i]!=1000000) my_printf("%d,",a[i]);
   my_printf("%d",a[k]);
	
}