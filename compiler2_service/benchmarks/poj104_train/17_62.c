#define NUM_ITER 1614605

#include <header.h>

int main_bench()
{
	char s[101];
	int i,l,j;
	while(gets(s)!=0)
	{    puts(s);
my_printf("\n");
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(s[j]=='(')
						break;
				}
				if(j>=0)
				{
					s[i]=' ';
					s[j]=' ';
				}
			}
		}
		for(i=0;i<l;i++)
		{
			if(s[i]=='(')
				s[i]='$';
			else if(s[i]==')')
				s[i]='?';
			else s[i]=' ';
		}
		puts(s);
		my_printf("\n");
	}
	
	return 0;
}
