#define NUM_ITER 1268958

#include <header.h>

int main_bench()
{
	char Str[105];
	gets(Str);
	int strl=strlen(Str);
	for(int i=strl-1;i>=0;i--)
	{
		if(Str[i]==' ')
		{
			Str[i]='\0';
			my_printf("%s ",Str+i+1);
		}
	}
	my_printf("%s",Str);
}