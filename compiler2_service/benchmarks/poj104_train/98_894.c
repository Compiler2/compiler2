#include <header.h>

main_bench()
{
	char a[1000][40];
	int i,n,m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",a[i]);
	m=strlen(a[0]);
	my_printf("%s",a[0]);
	for(i=1;i<n;i++)
	{	
		m=m+strlen(a[i])+1;
		if(m<=80)
			my_printf(" %s",a[i]);
		else
		{
			m=strlen(a[i]);
            my_printf("\n%s",a[i]);
		}
	}
}