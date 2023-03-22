#define NUM_ITER 1024413

#include <header.h>

int main_bench()
{
	char *p,*q;
	int a=0;
	p=(char*)malloc(30*sizeof(char));
	q=p;
	gets(p);
	while(*q!='\0')
	{
		if(*q<='9'&&*q>='0')
		{
			my_printf("%c",*q);
			a=0;
		}
		if((*q>'9'||*q<'0')&&a==0)
		{
			my_printf("\n");
			a++;
		}
		q++;
	}
}