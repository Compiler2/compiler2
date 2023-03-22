#define NUM_ITER 726268

#include <header.h>


int main_bench()
{
	int i;
	char s[20];
	my_printf("\n");
	my_scanf("%d", &i);
	sprintf(s, "%d", i);
	for(i=strlen(s)-1; i>=0; i--)
	{
		my_printf("%c", s[i]);
	}
	puts("\n");

	return 0;
}
