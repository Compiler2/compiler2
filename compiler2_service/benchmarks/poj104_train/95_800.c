#include <header.h>

int main_bench()
{
	char a[80];
	char b[80];
	int m,i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<91)
		{a[i]=a[i]+32;}
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]<91)
		{b[i]=b[i]+32;}
	}
	m=strcmp(a,b);
	if(m>0)
		my_printf(">");
	else if(m==0)
		my_printf("=");
	else
		my_printf("<");
	return 0;
}