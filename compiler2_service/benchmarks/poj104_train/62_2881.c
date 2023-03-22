#include <header.h>

int main_bench()
{
    char a[1000];
	int i=0;
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]!=' ')my_printf("%c", a[i]);
		else if(a[i+1]!=' ')my_printf(" ");
		i++;
}
	return 0;
}
