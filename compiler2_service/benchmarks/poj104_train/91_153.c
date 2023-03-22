#define NUM_ITER 805086

#include <header.h>

int main_bench()
{
    char s[102]={' '},*p;
    gets(s);
	p=s;
	*(p+strlen(s))=*p;
	for(p=s;p<s+strlen(s);p++)
		*p+=*(p+1);
	*(p-1)='\0';
	my_printf("%s",s);
}
