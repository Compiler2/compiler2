#define NUM_ITER 1436306

#include <header.h>

int main_bench()
{
	int i;
	char s[1001];
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		while(s[i]!=' '&&s[i]!='\0')
		{
			my_printf("%c",s[i]);
			i++;
		}
		if(s[i]!='\0')
		    my_printf(" ");
		while(s[i]==' ')
		{
			i++;
		}
	}
	return 0;
}