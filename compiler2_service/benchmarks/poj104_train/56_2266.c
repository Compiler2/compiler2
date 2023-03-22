#include <header.h>

int main_bench()
{
	char num[5];
	gets(num);
	for(int i=strlen(num)-1;i>=0;i--)
	{
		my_printf("%c",num[i]);
	}
	getchar();
	getchar();
	return 0;
}
