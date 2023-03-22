#include <header.h>

int main_bench()
{
	char c[40];
	int i=0,flag=1;
	gets(c);
	while(c[i]!='\0')
	{
		if(c[i]>=48&&c[i]<=57)
		{
			my_printf("%c",c[i]);
		    flag=0;
		}
		else if(flag==0)
		{
			my_printf("\n");
			flag=1;
		}
		i++;
	}

	return 0;
}

