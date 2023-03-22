#define NUM_ITER 932380

#include <header.h>

int main_bench()
{
	char* string=(char*)malloc(30);
	gets(string);
	char *p=string;
	int len=strlen(string);
	for(;p<string+len;p++)
	{
	    int anynumber=0;
		while(*p>='0'&&*p<='9')
	    {
		my_printf("%c",*p);
		p++;
		anynumber++;
	    }
		if(anynumber)
		{
			my_printf("\n");
		}
	}
}