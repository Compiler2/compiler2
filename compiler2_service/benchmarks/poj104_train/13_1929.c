#include <header.h>

int main_bench()
{
	int n,a[20000],i=0,t=0,p=0;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
			
	}
	for(i=0;i<=n-1;i++)
	{
	for(t=0;t<=i-1;t++)
		{
			if(a[i]==a[t])
				p++;
		}
    
	if(p!=0)
			a[i]=0;
	p=0;
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]!=0)
		{my_printf("%d",a[i]); 
		break;}
	}
    for(t=i+1;t<=n-1;t++)
	{
		if(a[t]!=0)
			my_printf(" %d",a[t]); 
	}
}