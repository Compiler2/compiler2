#define NUM_ITER 1006460

#include <header.h>

int main_bench()
{
	char s[80],s1[80];
	gets(s);
	gets(s1);
	char*p;
	char*l;
	for(p=s;*p!='\0';p++)
	{
		if(*p>=65&&*p<=90)
		{
			*p=*p+32;
		}
	}
	for(l=s1;*l!='\0';l++)
	{
		if(*l>=65&&*l<=90)
		{
			*l=*l+32;
		}
	}
	int cmp;
	cmp=strcmp(s,s1);
	if(cmp<0)
	{
		my_printf("<");
	}
	else if(cmp==0)
	{
		my_printf("=");
	}
	else if(cmp>0)
	{
		my_printf(">");
	}
	return 0;
}