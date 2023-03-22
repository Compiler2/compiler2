#include <header.h>

int main_bench()
{
	char str[10000];
	char *p;
	gets(str);
	p=str;
	int k;
	k=0;
	while(*p!='\0')
	{
		if(*p!=' ') 
		{k++;p++;}
		else if(*(p-1)!=' ')
		{
			my_printf("%d,",k);
			p++;
			k=0;
			continue;
		}
		else {p++;continue;}
	}
	my_printf("%d",k);
}
	
