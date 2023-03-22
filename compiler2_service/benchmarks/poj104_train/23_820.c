#define NUM_ITER 1229777

#include <header.h>

int main_bench()
{
	char str[100],*p,*t,*s;
	int i,j,n;
	gets(str);
	n=strlen(str);
	for(p=str+n;p>=str;p--)
	{
		if((*p)==' ')
		{
			for(t=p+1;((*t)!=' ')&&((*t)!='\0');t++)
			{
			    my_printf("%c",*t);
			}
			my_printf(" ");
		}
			
	}
	for(s=str;((*s)!=' ')&&((*s)!='\0');s++)
		my_printf("%c",*s);
}