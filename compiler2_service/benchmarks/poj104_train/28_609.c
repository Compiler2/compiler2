#include <header.h>

int main_bench()
{
	int i,j;
	char s[300][100];
	for(i=0;;i++)
	{
		my_scanf("%s",s[i]);
		if(getchar()=='\n') break;
	}
	for(j=0;j<i;j++)
	{
		my_printf("%d,",strlen(s[j]));
	}
	my_printf("%d",strlen(s[i]));
}
