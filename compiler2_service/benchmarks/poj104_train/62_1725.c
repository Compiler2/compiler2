#include <header.h>


int main_bench()
{
	int i;
	char c[300];
	gets(c);
	i=0;
	while (c[i]!=0)
	{
		if ((c[i]==' ')&&(c[i+1]==' '))
		{
			i++;
		}
		else
		{
			my_printf("%c",c[i]);
			i++;
		}
	}
	return 0;
}
