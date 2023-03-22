#include <header.h>


int main_bench()
{
	char a[35];
	gets(a);
	char* end=a+strlen(a);
	for (char *i=a;i<end;i++)
	{
		if (*i>='0' && *i<='9')
		{
			my_printf("%c",*i);
		}
		else
		{
			while (!(*i>='0' && *i<='9'))
			{
				i++;
			}
			i--;
			my_printf("\n");
		}
	}
	return 0;
}