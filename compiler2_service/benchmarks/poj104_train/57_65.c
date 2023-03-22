#define NUM_ITER 31056

#include <header.h>

int main_bench()
{
	int n;
	char s[300];
	int i;
	my_scanf("%d", &n);
	while(n--)
	{
		my_scanf("%s", s);
		i = strlen(s)-1;
		if(s[i] == 'r')
			s[i-1] = '\0';
		if(s[i] == 'y')
			s[i-1] = '\0';
		if(s[i] == 'g')
			s[i-2] = '\0';
		my_printf("%s\n", s);
	}
	return 0;
}