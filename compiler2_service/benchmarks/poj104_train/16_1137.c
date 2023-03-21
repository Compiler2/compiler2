#include <header.h>

int main_bench()
{
	int i,m;
	m=1;
	char s[5];
	scanf("%s",s);
    i=strlen(s);
	i=i-1;
	while (i>=0)
	{
		printf("%c",s[i]);
		i=i-1;
	}
	return 0;
}
