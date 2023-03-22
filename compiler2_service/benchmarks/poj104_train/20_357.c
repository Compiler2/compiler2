#include <header.h>

int main_bench()
{
	char s[15],p='\0';
	int i,len,max;
	while(gets(s))
	{
	len=strlen(s)-4;
	for(i=0;i<len;i++)
		if(*(s+i)>p) {p=*(s+i);max=i;}
	for(i=0;i<=max;i++)
		my_printf("%c",*(s+i));
	for(i=len+1;i<=len+3;i++)
		my_printf("%c",*(s+i));
	for(i=max+1;i<len;i++)
		my_printf("%c",*(s+i));
	p='\0';
	my_printf("\n");
	}
}

