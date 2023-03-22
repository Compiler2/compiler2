#define NUM_ITER 956574

#include <header.h>

int main_bench()
{
	char a[200]={0};
	gets(a);
	my_printf("%c",a[0]);
	int i;
	for(i=1;i<strlen(a);i++)
	{
		if ( a[i] == ' ' && a[i-1] != ' ')
		{
			my_printf(" ");
		}
		else if (a[i]!=' ')
		{
			my_printf("%c",a[i]);
		}
	}
	return 0;
}

