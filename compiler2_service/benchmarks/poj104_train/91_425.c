#include <header.h>

int main_bench()
{
	char s[102]="",*p,i,c;
	int x;
	gets(s);
	x=strlen(s);
	c=s[0];
	p=s;
	for(i=0;i<x-1;i++,p++)
	{
		*(p)=*(p)+*(p+1);
	}
    s[x-1]=s[x-1]+c;
	my_printf("%s",s);
	return 0;
}