#define NUM_ITER 810254

#include <header.h>

void ex(char a[], char b[]);
int main_bench()
{
	char a[100], b[100];
	int i, j, l;
	my_scanf("%s%s", a, b);
	ex(a, b);
	if(strlen(a) == strlen(b))
	{
		l = strlen(a);
		i = strcmp(a, b); 
		if(i == 0)
			my_printf("YES");
		else
			my_printf("NO");
	}
	else
		my_printf("NO");
}

void ex(char a[], char b[])
{
	char c;
	int l, i, j;
	l =strlen(a);
	for(i = 0;i < l;i ++)
	{
		for(j = 0;j < l - 1;j ++)
		{
			if(a[j] < a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
	}
	l =strlen(b);
	for(i = 0;i < l;i ++)
	{
		for(j = 0;j < l - 1;j ++)
		{
			if(b[j] < b[j + 1])
			{
				c = b[j];
				b[j] = b[j + 1];
				b[j + 1] = c;
			}
		}
	}
}