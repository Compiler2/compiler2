#include <header.h>

int main_bench()
{
	char s[101],*p;
	gets(s);
	p=s;
	while(*p!='\0')
	{
		if(*p!=' ')
		{
			my_printf("%c",*p);
			p++;             
		}
		if(*p==' ')
		{
			my_printf(" ");
			do{p++;}while(*p==' ');
		}
	}

}



		
		
	
