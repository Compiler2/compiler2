#include <header.h>

int main_bench()
{
	char a[100];
	int i,n=0,t=0,j=0;
	gets(a);
	for (i=0;a[i]!='\0';i++) n=n+1;
	for (i=n-1;i>=0;i--)
	{
		if (a[i]==' ')
		{	
			for(j=i+1;a[j]!=' '&&a[j]!='\0';j++) my_printf("%c",a[j]); my_printf(" ");
		}
	}
	for (i=0;a[i]!=' '&&a[i]!='\0';i++) my_printf("%c",a[i]);
}