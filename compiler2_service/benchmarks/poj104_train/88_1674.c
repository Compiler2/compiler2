#define NUM_ITER 1499004

#include <header.h>

int main_bench()
{
	char s[30];
	char *p;
	gets(s);
	p=&s[0];
	for( ;p<p+30;p++){
		if(*p>='0'&&*p<='9')
			my_printf("%c",*p);
		else if(p>s){
			if(*(p-1)>='0'&&*(p-1)<='9')
				my_printf("\n");
		}
		if(*p=='\0') break;
	}
	return 0;
}