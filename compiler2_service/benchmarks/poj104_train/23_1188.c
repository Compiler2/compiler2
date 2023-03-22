#include <header.h>

int main_bench()
{
	char a[1000];
	int i,m=0,j;
	gets(a);
	for(i=0;a[i]!='\0';i++)
		m++;
	for(i=m-1;i>=0;i--)
	{
		if(a[i]==' ')
		{
			for(j=i+1;a[j]!=' '&&a[j]!='\0';j++)
			my_printf("%c",a[j]);
			my_printf(" ");
		}
	}
	for(i=0;a[i]!=' '&&a[i]!='\0';i++)
		my_printf("%c",a[i]);
}