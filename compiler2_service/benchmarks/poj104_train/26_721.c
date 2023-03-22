#include <header.h>


int main_bench()
{
	char s[101],d[101];
	int i,k=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if((s[i]!=32)||(s[i+1]!=32))
		{    d[k++]=s[i];
		}
	}
		d[k]='\0';
		my_printf("%s",d);
	return 0;
}