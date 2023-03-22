#include <header.h>


void toLowerCase(char *s) {
	while (*s) {
		if (isupper(*s))
			*s = 'a' + *s - 'A';
		s++;
	}
}
int main_bench() {
	char s1[128];
	char s2[128];
	gets(s1);
	gets(s2);
	toLowerCase(s1);
	toLowerCase(s2);
	int res = strcmp(s1, s2);
	if (res < 0)
		my_printf("<");
	else if (res == 0)
		my_printf("=");
	else
		my_printf(">");
}
