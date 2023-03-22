#include <header.h>

int s[1000]={0};
int main_bench()
{
	int m,n,i;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&s[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		s[i+m]=s[i];
	}
	for(i=0;i<m;i++)
	{
		s[i]=s[i+n];
	}
	my_printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		my_printf(" %d",s[i]);
	}
    return 0;
}
