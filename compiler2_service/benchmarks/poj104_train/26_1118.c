#define NUM_ITER 171091

#include <header.h>

int main_bench()
{
	char str[300][100];
	int i, l, n;
	for (i = 0;;i++)
	{
		my_scanf("%s",str[i]);
		if (str[i][0] == '\0')
			break;
		l = strlen(str[i]);
		if (i == 0)
		{
			my_printf("%s",str[i]);
		}
		else my_printf(" %s",str[i]);
	}
	
	return 0;
}