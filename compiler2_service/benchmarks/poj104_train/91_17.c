#include <header.h>


int main_bench(){
	char s[101];
	char s1[101];

	char *p=s,*q=s1;
	char *t=s;

	gets(s);
	for(p=s+1,q=s1;p<s+strlen(s),q<s1+strlen(s)-1;p++,q++){
		*q=*(p-1)+*p;
	}
	*q=*(p-1)+*t;

	for(p=s1;p<s1+strlen(s);p++){
		my_printf("%c",*p);
	}

	return 0;
}
