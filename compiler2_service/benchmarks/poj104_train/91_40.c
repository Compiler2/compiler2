#define NUM_ITER 1263549

#include <header.h>

int main_bench()
{
	char s[101];
	char *p;
	char s1[101];
	char *t;
	int n;

	gets(s);
	n=strlen(s);
	
	t=s1;
	for(p=s;p<s+n-1;){                
		*t=*p+*(++p);
		t++;
	} 
	*t=*p+*s;

	for(t=s1;t<s1+n;t++){
		my_printf("%c",*t);
	}
	return 0;
}