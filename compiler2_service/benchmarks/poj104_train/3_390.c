#include <header.h>

int main_bench()
{
	int n,k,a[1000],b[1001],i,q;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		b[i+1]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(q=1;q<n+1;q++)
		{
			if(a[i]+b[q]==k){
				my_printf("yes\n");
				if(q==n){
					q--;
				}
				break;
			}
		}
		if(q<n)
			break;
		if(i==n-1)
		{
			my_printf("no\n");
		}
		
	}
}
