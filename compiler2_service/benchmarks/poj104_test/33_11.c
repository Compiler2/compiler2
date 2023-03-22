#define NUM_ITER 34563

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
		i = 0;
		while(s[i] != '\0')
		{
			if(s[i] == 'A')
			my_printf("T");
			if(s[i] == 'T')
			my_printf("A");
			if(s[i] == 'G')
			my_printf("C");
			if(s[i] == 'C')
			my_printf("G");
			i++;
		}
		my_printf("\n");
	}
	return 0;
}