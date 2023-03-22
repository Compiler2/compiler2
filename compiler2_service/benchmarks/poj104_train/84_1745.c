#include <header.h>

int main_bench()
{
	int s[100],n,i,m,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&s[i]);
	}
	for(j=0;j<2;j++)
	{
		
		for(i=n-1;i>0;i--)
	{
		if(s[i]>s[i-1])
		{
			m=s[i-1];
			s[i-1]=s[i];
			s[i]=m;
		}
	}
	}
my_printf("%d\n%d",s[0],s[1]);

	return 0;
}