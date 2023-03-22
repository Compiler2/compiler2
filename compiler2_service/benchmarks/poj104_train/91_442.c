#define NUM_ITER 1228113

#include <header.h>

int main_bench()
{
	char s[102] = { "\0" }, s1[102] = { "\0" };
	int i, l;
	gets(s);
	l = strlen(s);
	for (i = 0; i < l - 1; i++)
		s1[i] = s[i] + s[i + 1];
	s1[i] = s[i] + s[0];
	for (i = 0; i < l; i++)
		my_printf("%c", s1[i]);
	return 0;
}