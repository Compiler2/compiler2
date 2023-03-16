#include <header.h>


int main()
{
	char s[101],pre;
	int i;

	gets(s);
	pre='-';

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ') 
			printf("%c",s[i]);
		else if(pre!=' ')
			printf(" ");
		pre=s[i];
	}

	return 0;
}