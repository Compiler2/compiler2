#define NUM_ITER 1454606

#include <header.h>

int main_bench()
{
	char s[10000];
	gets(s);
	int i,count;
	count=0;
	i=0;
	while(s[i]!=' '&&s[i]!='\0')
	{
		i++;
		count++;
	}
	my_printf("%d",count);
	while(s[i]!='\0'&&s[i]!='\0')
	{
		if(s[i]!=' ')
		{
			count=0;
		    while(s[i]!=' '&&s[i]!='\0')
			{
			   count++;
			   i++;
			}
			my_printf(",%d",count);
		}
		else
		{
			i++;
		}
	}
	return 0;
}
