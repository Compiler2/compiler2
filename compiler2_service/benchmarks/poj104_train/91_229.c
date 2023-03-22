#define NUM_ITER 1249359

#include <header.h>

int main_bench()
{
	int len,i;
	char str[100];
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(i!=len-1)
		{
			my_printf("%c",str[i]+str[i+1]);
		}else{
			my_printf("%c",str[len-1]+str[0]);
		}
	}
	return 0;
}