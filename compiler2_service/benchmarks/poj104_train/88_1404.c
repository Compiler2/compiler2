#define NUM_ITER 1306003

#include <header.h>

int main_bench()
{
	char c[31];
    char *p;
	gets(c);
	int i,k=strlen(c);
    for(p=c;p<=c+k-1;p++)
	{
		if(*p<'0'||*p>'9')continue;
		else
		{
			my_printf("%c",*p);
			if(p<=c+k-2)
			{
				if(*(p+1)<'0'||*(p+1)>'9')my_printf("\n");
			}
			else my_printf("\n");
		}
	}
	return 0;
}
