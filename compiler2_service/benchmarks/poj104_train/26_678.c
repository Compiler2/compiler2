#define NUM_ITER 1526854

#include <header.h>

int main_bench()
{
	char st[101];
	int i;
	gets(st);
    i=0;
	while (st[i]!='\0')
	{
		if ((st[i]!=' ')||(st[i-1]!=' ')) my_printf("%c",st[i]);
		i++;
	}
	return 0;
}