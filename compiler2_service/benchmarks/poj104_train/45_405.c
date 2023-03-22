#include <header.h>

int main_bench()
{
	int i;
	char s[100],w[100],*p,*q;
	my_scanf("%s %s",s,w);
	p=s;q=w;
	while(*p!=*q)
	q++;
	for(i=0;i<strlen(s);i++,p++,q++)
		if(*p!=*q)break;
		if(i==strlen(s))
			my_printf("%d",q-w-strlen(s));
}