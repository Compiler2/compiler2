#define NUM_ITER 175867

#include <header.h>

int main_bench()
{
	char ch;
	int i = 0, j, k;
	int conuter = 0;
	int length[300] = {0};
	while (1)
	{
		my_scanf("%c", &ch);
		if (ch == '\n')
		{
			length[i] = conuter;
			break;
		}
		else
		{
			if (ch == ' ')
			{
				length[i] = conuter;
				conuter = 0;
				if (length[i] != 0)
				{
					i++;
				}
			}
			else
			{
				conuter++;
			}
		}
	}
	for (j = 0; j < i; j++)
	{
		my_printf("%d,", length[j]);
	}
	my_printf("%d", length[j]);
	return 0;
}