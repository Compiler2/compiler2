#define NUM_ITER 1296182

#include <header.h>


int main_bench()
{
	int len,i;
	char s[1000];
	gets(s);
	len=strlen(s);
	for (i=0;i<len-1;i++)
      my_printf("%c",(int)(s[i])+(int)(s[i+1]));
	my_printf("%c\n",(int)(s[0])+(int)(s[len-1]));
}