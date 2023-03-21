#include <header.h>

sb(char a[])
{
	char *p,*q;
	int n;
	n = strlen(a);
	p = a + n - 1;
    while (*p != ' '&&p != a - 1)
			p--;
	q = p + 1;
	for (;*q != '\0'&&*q != ' ';q++)
			printf("%c",*q);
	p--;
	for (;p>=a;p--)
	{
		printf(" ");
		while (*p != ' '&&p != a - 1)
			p--;
		q = p + 1;
		for (;*q != '\0'&&*q != ' ';q++)
			printf("%c",*q);
	}
}
int main_bench()
{
	char a[1024];
	gets(a);
	sb(a);
}
	