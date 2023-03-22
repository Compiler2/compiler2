#define NUM_ITER 1509824

#include <header.h>

int main_bench()
{
	char a[101];
	char *p=a;
	gets(a);
	for(p=a;*p!='\0';p++)
	{
		if(*p==' ')
		{
			if(*(p+1)==' ')continue;
			else my_printf("%c",*p);
		}
		else my_printf("%c",*p);
	}	
}
	