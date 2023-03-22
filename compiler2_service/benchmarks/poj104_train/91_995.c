#define NUM_ITER 1193539

#include <header.h>

int main_bench()
{
	char s1[101]={'\0'},s2[101]={'\0'};
	int l,i;
	gets(s1);
	l=strlen(s1);
	for(i=0;i<=l-2;i++)
		s2[i]=s1[i]+s1[i+1];
	s2[l-1]=s1[0]+s1[l-1];
	my_printf("%s",s2);
}