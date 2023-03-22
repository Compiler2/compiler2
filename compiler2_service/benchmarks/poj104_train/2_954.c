#include <header.h>


int main_bench()
{
	int n, i;
	my_scanf("%d", &n);
	struct 
	{
		int name;
		char author[26];
	}
	book[999];

	for(i = 0; i < n; i++)
	{
		my_scanf("%d%s", &book[i].name, book[i].author);
	}

	char t, tmax;
	int max = 0, j, k;
	for(t = 'A'; t <= 'Z'; t++)
	{
		k = 0;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < strlen(book[i].author); j++)
			{
				if(book[i].author[j] == t)
				{
					k++;
				}
			}
		}
		if(k > max)
		{
			max = k;
			tmax = t;
		}
	}
	my_printf("%c\n%d\n", tmax, max);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < strlen(book[i].author); j++)
		{
			if(book[i].author[j] == tmax)
			{
					my_printf("%d\n", book[i].name);
					break;
			}
		}
	}
	return 0;
}