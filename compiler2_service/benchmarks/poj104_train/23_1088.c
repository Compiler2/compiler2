#include <header.h>

int main_bench()
{
	char c[100];
	int i,k,j,b=0,n,m=0;
	gets(c);
    n=strlen(c);
	for(i=n-1;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(c[i-j]==' ')
			{
				for(k=i-j+1;k<=i;k++)
				my_printf("%c",c[k]);
				my_printf(" ");
				m=i;
				b=j;
				break;
			}
		}
		i=i-j;		
	}
	if(m-b<=0)
	{
		for(k=0;k<n;k++)
			my_printf("%c",c[k]);
	}
	else
	{
	for(k=0;k<m-b;k++)
		my_printf("%c",c[k]);
	}
}
