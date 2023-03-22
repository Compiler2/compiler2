#define NUM_ITER 34180

#include <header.h>

int main_bench()
{
    int n;
	char str[500];
	my_scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		my_scanf("%s", str);
		if ((str[0] < 'a' || str[0] > 'z') && (str[0] < 'A' || str[0] > 'Z') && (str[0] != '_'))
		{
			my_printf("no\n");
			continue;
		}
		else if(strlen(str) == 1)
		{
			my_printf("yes\n");
		}
		else
		{
			int len = strlen(str);
			int j;
			for (j = 1; j < len; j++)
			{
				if ((str[j] < 'a' || str[j] > 'z') && (str[j] < 'A' || str[j] > 'Z') && (str[j] != '_') && (str[j] < '0' || str[j] > '9'))
					break;
			}
			if (j == len)
				my_printf("yes\n");
			else
				my_printf("no\n");
		}
	}
	return 0;
}
