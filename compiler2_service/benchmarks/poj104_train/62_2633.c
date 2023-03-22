#include <header.h>

int main_bench()
{
	char str[300];
	int i;
	char c;
	gets(str);
	for(i=0;(c=str[i])!='\0';i++)
	{
		if((c=str[i])==32)
		{
			if((c=str[i-1])==32)
				continue;
		}
		my_printf("%c",str[i]);
	}
	my_printf("\n");
	return 0;
}