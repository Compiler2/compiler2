#define NUM_ITER 1275651

#include <header.h>

int main_bench()
{
	char string[100];
	char *p;
	int len;
	int i;
	gets(string);
	len=strlen(string);
	for(p=string;p<string+len-1;p++)
	{
		i=*p+*(p+1);
		my_printf("%c",i);
	}
	if(p==string+len-1)
	{
		i=*p+*(p-len+1);
		my_printf("%c",i);
	}
	my_printf("\n");
}