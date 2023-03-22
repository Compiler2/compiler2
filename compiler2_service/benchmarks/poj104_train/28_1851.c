#define NUM_ITER 417859

#include <header.h>

int main_bench()
{
	char ch;
	int len = 0;
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ' && len)
		{
			my_printf("%d", len);
			len = 0;
			break;
		}
		else if(ch != ' ')
			len++;
	}
	if(ch == '\n')
	{
		my_printf("%d\n", len);
		return 0;
	}
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ' && len)
		{
			my_printf(",%d", len);
			len = 0;
		}
		else if(ch != ' ')
			len++;
	}
	if(len) my_printf(",%d\n", len);
	else my_printf("\n");
	return 0;
}