#define NUM_ITER 429979

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	char *p,*q;
	my_scanf("%s %s",s,w);
	p=s;
	q=w;
	do
	{
		if(*p==*q)
		{
			if(*p=='\0')
			{
				my_printf("%d",q-strlen(s)-w);
				return;
			}
			else
			{
				p++;
				q++;
			}
		}
		else
		{
			if(*p=='\0')
			{
				my_printf("%d",q-strlen(s)-w);
				return;
			}
			else
			{
				p=s;
				q++;
			}
		}
	}while(q!='\0');
}
