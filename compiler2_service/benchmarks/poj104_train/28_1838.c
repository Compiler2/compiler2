#include <header.h>

int main_bench()
{
	char ch;
	int len = 0,tag=0;
	while((ch = getchar()))
	{
		if((ch == ' '||ch=='\n') && len)
		{
			if(tag)
				my_printf(",");
			my_printf("%d", len);
			len = 0;
			tag=1;
			if(ch=='\n')
				break;
		}
		else if(ch!= ' ')
			len++;
	}
	my_printf("\n");
	return 0;
}