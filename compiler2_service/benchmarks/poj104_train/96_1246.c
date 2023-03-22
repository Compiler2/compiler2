#include <header.h>

int main_bench()
{
	int i, j;
	int a, t = 0,b=0;
	char s[100];
	char result[100];
	gets(s);
	a = strlen(s);
	for (i = 0; i < 100; i++)
	{
		result[i] = '\0';
	}
	for (i = 0; i < a; i++)
	{
		t = t * 10 + (s[i] - '0');
		result[i] = t / 13 + '0';
		t = t % 13;
	}
	i = 0;
	for (i = 0; i < a; i++)
	{
		b = b + result[i]-'0';
	}
	if (b == 0)
		my_printf("0\n");
	else
	{
		i = 0;
		while (i < a)
		{
			if (result[i] == '0')
				i++;
			else
				break;
		}
		for (; i < a; i++)
		{
			my_printf("%c", result[i]);
		}
		my_printf("\n");
	}
	my_printf("%d",t);
}