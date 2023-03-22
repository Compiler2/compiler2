#define NUM_ITER 3704

#include <header.h>

int main_bench()
{
	char *s;
	s=(char*)calloc(100000,sizeof(char));
	gets(s);
	for(;*s!='\0';s++)
	   if((*s!=' ')||((*s==' ')&&(*(s-1)!=' ')))
	     my_printf("%c",*s);
    my_printf("\n");
}