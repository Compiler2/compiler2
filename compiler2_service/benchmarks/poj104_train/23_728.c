#define NUM_ITER 1173563

#include <header.h>

int main_bench()
{
	char s[101];
	int i, j;
	gets(s);
	for(i=strlen(s)-1; i>0; i--)
		if(s[i]!=' '&&s[i-1]==' ')
		{
			for(j=i; s[j]!=' '&&s[j]!='\0'; j++)
				my_printf("%c", s[j]);
			my_printf(" ");
		}
	for(i=0; s[i]!=' '&&s[i]!='\0'; i++)
		my_printf("%c", s[i]);
	my_printf("\n");
}