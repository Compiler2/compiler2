#define NUM_ITER 1350770

#include <header.h>

int main_bench()
{
	int i=0,n;
	char str[101];
	gets(str);
	n=strlen(str);
	do
	{if (str[i]==' ' && str[i-1]==' ')
		{i++;
		 continue;
		}
	 my_printf("%c",str[i]);
	 i++;
	}while(i<n);
	return 0;
}
