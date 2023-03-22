#include <header.h>

int main_bench()
{
	char a[100];
	int l,j,i,m=0;
	gets(a);
	char *p=a;
	l=strlen(a);
	for(p=&a[l-1];p>=&a[0];p--)
	{
		if(*p==' ')
		{
			*p='\0';
			my_printf("%s ",p+1);
		}
	}
	p=a;
	my_printf("%s",p);
}