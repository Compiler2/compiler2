#include <header.h>


int main_bench()
{
	char string[101];
	int i;
	gets(string);
	my_printf("%c",string[0]);
	for(i=1;(string[i])!='\0';i++)
	{
		if(string[i]!=' ')  my_printf("%c",string[i]);
		else
		{
			if(string[i-1]!=' ')   my_printf(" ");
		}
	}
	return 0;
}