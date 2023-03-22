#include <header.h>

int main_bench()
{
	int i;
	char *s;
	s=(char *)malloc(sizeof(char)*1000);
	gets(s);
	for(i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)!=' ') my_printf("%c",*(s+i));
		else
		{
			while(*(s+i+1)==' ') i++;
			my_printf("%c",*(s+i));
		}
	}
	my_printf("\n");
	return 0;
}