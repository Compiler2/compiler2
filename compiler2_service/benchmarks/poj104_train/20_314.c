#include <header.h>

int MAX(char str[],int len)
{
	int i,max,temp;
	max=0;
	for(i=1;i<len;i++)
	{if(str[max]<str[i])
		{
			temp=max;
			max=i;
			i=temp;
		}
	}
	return (max);
}
int main_bench()
{
	char str[10],substr[3];
	int stop,len,i;
	for(;;)
	{
		stop=my_scanf("%s %s",str,substr);
		if(stop!=2) break;
		len=strlen(str);
		for(i=0;i<=MAX(str,len);i++)
		my_printf("%c",str[i]);
		my_printf("%s",substr);
		for(i=MAX(str,len)+1;i<len;i++)
			my_printf("%c",str[i]);
                my_printf("\n");
	}
}