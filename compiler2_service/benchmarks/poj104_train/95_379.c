#define NUM_ITER 985805

#include <header.h>

int main_bench()

{
	char s[80],c,s1[80];
	int i=0,k;
	gets(s);
	while (s[i]!='\0')
	{
		if (s[i]<=90 && s[i]>=65) s[i]=s[i]+32;
		i++;
	}
	i=0;
	gets(s1);
	while (s1[i]!='\0')
	{
		if (s1[i]<=90 && s1[i]>=65) s1[i]=s1[i]+32;
		i++;
	}
	k=strcmp(s,s1);
	if (k==0) my_printf("=");
	if (k>0) my_printf(">");
	if (k<0) my_printf("<");
	
	return 0;
}



