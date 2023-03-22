#define NUM_ITER 1563005

#include <header.h>

int main_bench()
{
	char c[1000];
	char *str=c;
	int flag,k;
	flag=1;
	k=0;
	gets(str);
	while(*str)
	{
		if((*str>='0'&&*str<='9')&&(flag==0)&&(k>0))
			my_printf("\n");
		if(*str>='0'&&*str<='9')
		{
			my_printf("%c",*str);
			flag=1;
			k++;
		}
		else
		{
			flag=0;
		}
		str++;

	}
	
		return 0;
}