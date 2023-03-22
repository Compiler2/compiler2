#define NUM_ITER 1307938

#include <header.h>

int main_bench()
{
	char s[150],*p;
	int len,l;
	gets(s);
	len=strlen(s);

	for(l=0,p=s+len-1;p>=s;p--)
	{
		if(*p==' ')
		{
			if(l)
			{
				l=0;
				*p=0;
				my_printf("%s ",p+1);
			}
		}
		else
			l++;
	}
	if(l)
		my_printf("%s\n",s);
	return 0;
}