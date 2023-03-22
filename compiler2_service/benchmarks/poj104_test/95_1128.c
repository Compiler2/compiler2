#define NUM_ITER 971911

#include <header.h>

int main_bench()
{
	char s1[100],s2[100];
	int i=0,a;
	gets(s1);gets(s2);
	while (s1[i]!='\0')
	{
		if ((65<=s1[i])&&(s1[i]<=90))
			s1[i]=s1[i]+32;
		i++;
	}
	i=0;
	while (s2[i]!='\0')
	{
		if ((65<=s2[i])&&(s2[i]<=90))
			s2[i]=s2[i]+32;
		i++;
	}
	a=strcmp(s1,s2);
if (a>0)
		my_printf(">");
	else if (a==0)
		my_printf("=");
	else my_printf("<");

}