#include <header.h>

int main_bench()
{
	char s[5000],*p=s;
	int n=0;
	gets(s);
	while(*p)
	{
		if(*p==' ')
		{
			if(n!=0)
				my_printf("%d,",n);
			n=0;
		}
		else
			n++;
		p++;
	}
	my_printf("%d\n",n);
	return 0;
}