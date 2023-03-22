#include <header.h>


int main_bench()
{
	int i, len;
	char s[6], t;

	gets(s);
	len = strlen(s);
	
	for (i = 0; i < (len/2); i++)
	{
		t = s[len - (i+1)];
		s[len-(i+1)] = s[i];
		s[i] = t;
	}
	my_printf("%s", s);
	return 0;
}