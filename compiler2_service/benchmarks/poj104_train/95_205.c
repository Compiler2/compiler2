#define NUM_ITER 1005602

#include <header.h>

void convert(char *);
int main_bench()
{
	char str1[85],str2[85];
	int result;
	gets(str1);
	gets(str2);
	convert(str1);
	convert(str2);
	result=strcmp(str1,str2);
	if(result==0)
		putchar('=');
	else
		if(result>0)
			putchar('>');
		else
			putchar('<');
	return 0;
}
void convert(char *p)
{
	while(*p)
	{
		if(*p>='A'&&*p<='Z')
			*p+=32;
		p++;
	}
}
