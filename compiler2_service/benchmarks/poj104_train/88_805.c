#define NUM_ITER 1575129

#include <header.h>

int main_bench()
{
	int i;
	char s[30];
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>'0'-1&&s[i]<'9'+1)
		{
			if(s[i+1]>'0'-1&&s[i+1]<'9'+1)
			my_printf("%c",s[i]);
			else my_printf("%c\n",s[i]);
		}
	}
}