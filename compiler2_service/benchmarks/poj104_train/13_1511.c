#include <header.h>

int main_bench()
{
	int n,a[10000],i,j,x=0;
	my_scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==0)
		continue;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]==a[j])
			{
			a[j]=0;
		}
}
}
my_printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	{
		if(a[i]!=0)
		my_printf(" %d",a[i]);
	
}
	return 0;
		
	
}