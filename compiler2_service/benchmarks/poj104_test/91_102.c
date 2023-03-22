#include <header.h>

int main_bench()
{
	int i,n=0;
	char c[101];
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		n++;
	}
	for(i=0;c[i]!='\0';i++)
	{
		if(i<n-1)
		{
			my_printf("%c",c[i]+c[i+1]);
		}
		if(i==n-1)
		{
			my_printf("%c",c[i]+c[0]);
		}
	}
	return 0;
}
