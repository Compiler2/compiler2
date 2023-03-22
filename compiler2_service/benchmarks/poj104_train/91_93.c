#define NUM_ITER 1522446

#include <header.h>

int main_bench()
{
	char cha[500];
	gets(cha);
	int i=0,b;
	for(i=0;cha[i]!='\0';i++)
	{
		if(cha[i+1]=='\0')
		{
			b=(int)cha[i]+(int)cha[0];
			my_printf("%c",b);
		}
		else
		{
			b=(int)cha[i]+(int)cha[i+1];
			my_printf("%c",b);
		}
	}
	return 0;
}