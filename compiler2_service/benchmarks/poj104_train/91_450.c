#define NUM_ITER 1239702

#include <header.h>

int main_bench()
{
	char s[101],c,*p;
	int len,i,asc1,asc2;
	gets(s);
	len=strlen(s);

	p=&s[0];

	for(i=0;i<len-1;i++)
	{
		asc1=*(p++);
		asc2=*p;
		c=asc1+asc2;
		my_printf("%c",c);
	}

	asc1=s[len-1];
	asc2=s[0];
	c=asc1+asc2;
	my_printf("%c",c);

	return 0;
}

