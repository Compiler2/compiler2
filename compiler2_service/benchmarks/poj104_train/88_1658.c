#define NUM_ITER 1499157

#include <header.h>




int main_bench() {
	char s[31];
	
	char *p;
	gets(s);
	p=s;
	while((*p)!='\0')
	{
	for(;(*p)>='0'&&(*p)<='9';p++)
	{
		my_printf("%c",*p);
		}

	if((*p)!='\0')
	p++;
	my_printf("\n");
	}
	return 0;
}