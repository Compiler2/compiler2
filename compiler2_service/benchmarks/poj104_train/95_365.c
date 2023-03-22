#include <header.h>

int main_bench()
{
	char s[80],t[80],*p,*q;
	gets(s);
	gets(t);
	p=s;
	q=t;
    for(;*p!=0;p++)
	{
		if(*p<='Z'&&*p>='A')
			*p=*p+32;
	}
	for(;*q!=0;q++)
	{
		if(*q<='Z'&&*q>='A')
			*q=*q+32;
	}

	if(strcmp(s,t)>0)
		my_printf(">");
	else if(strcmp(s,t)<0)
		my_printf("<");
	else
		my_printf("=");

	return 0;
}