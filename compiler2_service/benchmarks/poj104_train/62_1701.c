#define NUM_ITER 1354295

#include <header.h>

int main_bench()
{
	char a[200];
	gets(a);
	my_printf("%c",a[0]);
	for(int i=1;i<strlen(a);i++)
	{
		if(a[i-1]!=' ' && a[i]!=' ')
		{	my_printf("%c",a[i]);
		continue;
		}
		else if(a[i-1]==' ' && a[i]!=' ')
			my_printf(" %c",a[i]);
	}

	return 0;
}
