#include <header.h>


int main_bench()
{
	unsigned int i=0,j=0;
	char s[101];
	char a[101];
	char b[101];
	char tmp[101];
	gets(s);
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			tmp[j]=s[i];
			j++;
		}
		else
		{
			tmp[j]='\0';
			j=0;
			if(strcmp(tmp,a)==0)
				my_printf("%s ",b);
			else
				my_printf("%s ",tmp);
		}
	}
	tmp[j]='\0';
	if(strcmp(tmp,a)==0)
		my_printf("%s\n",b);
	else
		my_printf("%s\n",tmp);
	return 0;
}