#define NUM_ITER 1503845

#include <header.h>


int main_bench()
{
	char s[101],pre;
	int i;

	gets(s);
	pre='-';

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ') 
			my_printf("%c",s[i]);
		else if(pre!=' ')
			my_printf(" ");
		pre=s[i];
	}

	return 0;
}