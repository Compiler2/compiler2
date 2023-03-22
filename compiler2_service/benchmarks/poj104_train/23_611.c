#include <header.h>



int main_bench()
{
	char a[100][100];
	int i;
	char c;
	for (i=0;;i++)
	{
		my_scanf ("%s%c",a[i],&c);
		if (c!=' ')
		{
			break;
		}
	}
	my_printf ("%s",a[i]);
	for (i-1;i-1>=0;i--)
		my_printf (" %s",a[i-1]);
} 