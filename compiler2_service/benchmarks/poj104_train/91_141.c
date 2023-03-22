#define NUM_ITER 1287816

#include <header.h>



int main_bench()
{
	char str[201];
	gets(str);
	char *p;
	char s[200];
	int i;
	int len=strlen(str);
	p=str;
	for (i=0;i<len-1;i++)
	{
		s[i]=*p+*(p+1);
		p++;
	}
	if (p==&str[len-1])
	{
		s[len-1]=*p+(str[0]);
	}
	p=s;
	for (i=0;i<len;i++,p++)
	{
		my_printf("%c",*p);
	}
	return 0;
}




