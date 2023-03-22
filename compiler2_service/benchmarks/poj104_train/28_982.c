#include <header.h>

int main_bench()
{
	char str[999999];
	gets(str);
	int len=strlen(str);
	int i,n=0,k=0;
    char words[300][100];
	for(i=0;i<len;i++)
	{
		if(str[i]!=' ')
		{
			words[n][k]=str[i];
			k++;
		}
		else if(str[i-1]!=' '&&str[i]==' ')
		{
			words[n][k]='\0';
		    n++;
			k=0;
		}
	}
	words[n][k]='\0';
	for(i=0;i<n;i++)
	{
		my_printf("%d,",strlen(words[i]));
	}
	my_printf("%d",strlen(words[n]));
	return 0;
}