#define NUM_ITER 1286114

#include <header.h>

int main_bench()
{
	char s[20];
	int l, i;
	my_scanf("%s", s);
	l = strlen(s);
	for (i = l - 1; i >= 0; i--) my_printf("%c", s[i]);
	return 0;
}
