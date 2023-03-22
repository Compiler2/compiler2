#include <header.h>

int main_bench()
{
	char a[50],b[50],i,j,m;
	my_scanf("%s %s", a,b);
	m=0;
	for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		if(b[i]!=a[0])
		{
			continue;
		}
		for(j=0;j<strlen(a);j++)
		{
			if(b[i+j]==a[j])
			{
				m++;
			}
		}
		if(m==strlen(a))
		{
			my_printf("%d", i);
			break;
		}
	}
	return 0;
}