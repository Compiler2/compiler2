#define NUM_ITER 1522124

#include <header.h>

int main_bench()
{
	char s[30];
	gets(s);
	char *a;
	for(a=s;*a!='\0';a++)
	{
		if(*a>='0'&&*a<='9')
		{
			my_printf("%c",*a);
		}
		else
		{
			if(a==s)
			{
				continue;
			}
			else
			{
				if(*(a-1)>='0'&&*(a-1)<='9')
				{
					my_printf("\n");
				}
			}
		}
	}
	my_printf("\n");
	return 0;
}