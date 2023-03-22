#include <header.h>

int main_bench()
{
	char s[100005],*p,*q;
	int n;
	gets(s);
	n=strlen(s);
	for(p=s;p<s+n-1;p++)
		my_printf("%c",(*p+*(p+1)));
		my_printf("%c",(*s+*(s+n-1)));
}