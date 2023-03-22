#include <header.h>

int main_bench()
{	char s[1000];
	char * p, * a;
	int i;
	gets(s);
	a=s;
	for(p=s; p<s+strlen(s)-1; p++){
		my_printf("%c",*p + *(p+1));
	}
	my_printf("%c",*p + *a);
	return 0;
}
