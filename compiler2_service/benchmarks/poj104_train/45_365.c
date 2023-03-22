#define NUM_ITER 1060845

#include <header.h>


int main_bench()
{
	char s[51], w[51];
	my_scanf("%s %s", w, s);
	my_printf("%d", strstr(s, w)-s);


	return 0;
}