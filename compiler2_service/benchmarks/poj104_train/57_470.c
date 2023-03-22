#include <header.h>

int main_bench()
{
	void sh(char c[32]);
	int n,i;
	char c[32];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",c);
		sh(c);
	}
return 0;
}
void sh(char c[32])
{
	int m,j;
    m=strlen(c);
	if(c[m-1]=='y')
	{for(j=0;j<m-2;j++)	
	my_printf("%c",c[j]);
	my_printf("\n");
	}
	else if(c[m-1]=='r')
	{for(j=0;j<m-2;j++)
	my_printf("%c",c[j]);
	my_printf("\n");
	}
	else
	{for(j=0;j<m-3;j++)
	my_printf("%c",c[j]);
	my_printf("\n");
	}
}