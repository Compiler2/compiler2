#define NUM_ITER 1325328

#include <header.h>

int main_bench()
{
	char string[30000];
	int i,len,count=0;
	gets(string);
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		if(string[i]!=' ')
			count++;
		if(string[i]==' '&&string[i+1]!=' ')
		{
			my_printf("%d,",count);
			count=0;
		}
	}
	my_printf("%d",count);
	return 0;
}