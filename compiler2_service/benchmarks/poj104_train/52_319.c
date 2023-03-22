#include <header.h>

int main_bench()
{
	int n,m,s[200],i,j;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&s[i]);
	}
	j=100;
	for(i=n-m;i<n;i++)
	{	
		s[j]=s[i];
		j++;
	}
	j=100+m;
	for(i=0;i<n-m;i++)
	{	
		s[j]=s[i];
		j++;
	}
	for(j=100;j<100+n;j++)
	{
		if(j<99+n)
	      my_printf("%d ",s[j]);
		else
			my_printf("%d",s[j]);
	} 
	return 0;
}
