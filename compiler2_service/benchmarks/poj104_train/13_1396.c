#include <header.h>

int main_bench()
{
	int a[20000],i,n,j,flag;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
	{for(j=i-1;j>=0;j--)
	{if(a[i]==a[j])
	{flag=1;
	break;}
	else
	{flag=0;
	continue;}}
	if(flag==0)
		my_printf(" %d",a[i]);}
	return 0;
}