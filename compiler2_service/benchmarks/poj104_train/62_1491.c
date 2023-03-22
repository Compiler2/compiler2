#define NUM_ITER 614338

#include <header.h>

int main_bench() 
{
	char *q,*p;
	int a=0;
	p=(char*)malloc(200*sizeof(char));
	q=p;
	gets(p);
	while(*q!='\0')
	{
		if(*q!=' ')
		{
			my_printf("%c",*q);
			a=0;
		}
		if(*q==' '&&a==0)
		{
			my_printf(" ");
			a++;
		}
		q++;
	}
}