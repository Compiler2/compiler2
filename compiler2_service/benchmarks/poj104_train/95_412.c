#define NUM_ITER 1022582

#include <header.h>

int main_bench()
{
	char s1[80],s2[80];
	int i;
	gets(s1);
	gets(s2);
	for (i=0;s1[i]!='\0';i++)
	{
		if (s1[i]<='z'&&s1[i]>='a')
		{
	       s1[i]=s1[i]-32;
		}
	}
	for (i=0;s2[i]!='\0';i++)
	{
		if (s2[i]<='z'&&s2[i]>='a')
		{
			s2[i]=s2[i]-32;
		}
	}
	i=strcmp(s1,s2);
	if (i==0)
		my_printf ("=");
	else if (i<0)
		my_printf ("<");
	else if (i>0)
		my_printf (">");
	return 0;
}


