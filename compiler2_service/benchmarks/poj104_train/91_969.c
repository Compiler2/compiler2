#define NUM_ITER 1287355

#include <header.h>

int main_bench()
{
	char c[101];
	gets(c);
	int len;
	len=strlen(c);
	int i;
	for(i=0;i<len;i++)
	{
		if(i==len-1)my_printf("%c",c[i]+(c[0]-' '+32));
		else my_printf("%c",c[i]+(c[i+1]-' '+32));
	}
}