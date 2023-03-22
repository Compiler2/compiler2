#include <header.h>

int main_bench()
{
	int n,a[100000],i,k,count=0;
	int *p;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for(p=a,i=0;i<=n-1;i++)                                                                                                                                                                                                                                                       
	{
		if(a[i]!=k)
		{
			*p=a[i];
			p++;
		}
		else 
		{count++;}
	}
	for(p=a;p<=(a+n-1-count);p++)
	{
		if(p==a)my_printf("%d",*p);
		else my_printf(" %d",*p);
	}
}