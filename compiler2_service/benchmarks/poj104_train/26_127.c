#include <header.h>

int main_bench()
{
	char a[100], i;
	gets(a);
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]!=' ')
		{
			if(a[i-1]==' ')
				my_printf(" %c", a[i]);
			else
				my_printf("%c", a[i]);
		}
	}
	my_printf("\n");
}