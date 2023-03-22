#include <header.h>

int main_bench()
{
	int i,j,flag=0,n,k,a[10000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		if(i==1)
			my_scanf("%d",&a[i]);
		else
			my_scanf(" %d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			if(k==a[i]+a[j])
				flag=1;
	}
	if(flag==1)
		my_printf("yes");
	else
		my_printf("no");
}
