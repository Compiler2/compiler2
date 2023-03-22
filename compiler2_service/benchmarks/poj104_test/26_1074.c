#include <header.h>

int main_bench()
{
	char a[101],b[101];
	int i,c;
	gets(a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
		if(a[i]!=' ')
			my_printf("%c",a[i]);
		else if(a[i-1]!=' ')
			my_printf(" ");
	}
	return 0;
}
