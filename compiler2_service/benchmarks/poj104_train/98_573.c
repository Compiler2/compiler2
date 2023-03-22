#include <header.h>

int main_bench()
{
	int n,i,b[1000],m;
	char a[1000][100];
	my_scanf("%d",&n);
	my_scanf("%s",a[0]);
	m=strlen(a[0]);
	for(i=1;i<n;i++)
	{
		my_scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}	
	my_printf("%s",a[0]);
	for(i=1;i<n;i++)
	{
		if(m+1+b[i]<=80)
		{
			my_printf(" %s",a[i]);
			m=m+b[i]+1;
		}
		else
		{
			my_printf("\n%s",a[i]);
		    m=b[i];
	    }
	}
	return 0;
}