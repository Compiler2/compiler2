#include <header.h>

int main_bench()
{
	char *c;
	int k=1;
	c=(char*)malloc(30*sizeof(char));
	gets(c);
	for(;*c!='\0';c++)
	{
		if((*c<48)||(*c>57))
		   k=0;
        else if(k==0)
        {
        	my_printf("\n%c",*c);
        	k=1;
        }
        else
           my_printf("%c",*c);
	}
}