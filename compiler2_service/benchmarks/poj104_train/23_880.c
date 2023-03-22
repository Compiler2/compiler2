#include <header.h>

int main_bench()
{
	int n;
    char s[200],*p,*k;
	gets(s);
	n=strlen(s);
	for(p=s+n-1;p>s;p--){
		if(*p==' '){
			for(k=p+1;(*k!=' ')&&(*k!='\0');k++)
			{my_printf("%c",*k);}
			my_printf(" ");
		}
	}
	for(;(*p!=' ')&&(*p!='\0');p++)
		my_printf("%c",*p);
}
	