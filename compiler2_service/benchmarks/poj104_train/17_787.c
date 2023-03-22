#define NUM_ITER 20024

#include <header.h>

int main_bench()
{
	int n;
	int som;
	char a[105];
	char b[105];
	int len;
	int i,j;
	my_scanf("%d", &n);
	for (som = 1; som <= n; som++){
		my_scanf("%s", a);
		strcpy(b, a);
		len = strlen(a);
		for (i = len-1; i >=0; i--)
		{
			if (b[i] == '(')
				b[i] = '$';
			else if (b[i] == ')')
				b[i] = '?';
			else
				b[i] = ' ';
		}
		for (i = len - 1; i >= 0; i--)
		{
			if (b[i] == '$')
			{
				for (j = i + 1; j < len; j++)
				{
					if (b[j] == '?')
					{
						b[i] = ' ';
						b[j] = ' ';
						break;
					}
				}
			}
		}
		my_printf("%s\n%s\n", a, b);
	}
}