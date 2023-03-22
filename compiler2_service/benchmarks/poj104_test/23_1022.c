#include <header.h>

int main_bench()
{
	void inv(char s[]);
	char c[100];
	gets(c);
	inv(c);
}

void inv(char s[])
{
	char *p,*q;
	int k;
	k=strlen(s);
	for(p=s+k-1;p>=s;p--)
		if(*p==' ')
		{
			for(q=p+1;*q!=' '&&*q!='\0';q++)
				my_printf("%c",*q);
			my_printf(" ");
		}
	for(p=s;*p!=' '&&*p!='\0';p++)
		my_printf("%c",*p);
}
