#define NUM_ITER 1256046

#include <header.h>

int main_bench()
{
	char s[100];
	char *p,*q,*f;
	int n;
	gets(s);
	n=strlen(s);
	p=s+n-1;
	q=s+n;
	for(p=s+n-1;p>=s;p--)
    {
		if(*p==' ')
		{
			for(f=p+1;f<q;f++)
			{my_printf("%c",*f);}
			my_printf(" ");
			q=p;
		}
	}
	p=s;
	for(p=s;;p++)
	{
		if(*p!=' '&&*p!='\0')
		my_printf("%c",*p);
		else
		break;
	}
	s[n]='\0';
}