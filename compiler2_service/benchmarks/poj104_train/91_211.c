#include <header.h>


int main_bench()
{
	int len;
	char *str,*p,*q;
	str=(char *)calloc(150,sizeof(int));
	gets(str);
	len=strlen(str);
	for(p=str;p-str<len-1;p++)
		my_printf("%c",*p+*(p+1));
	my_printf("%c\n",*p+*str);
}


	