#include <header.h>

int main_bench()
{
	char s1[80],s2[80];
	int i,c;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			s1[i]+=32;
		}
		if(s2[i]>='A'&&s2[i]<='Z')
		{
			s2[i]+=32;
		}
	}
	c=strcmp(s1,s2);
	if(c==0)
	{
		my_printf("=");
	}
	else if(c>0)
	{
		my_printf(">");
	}
	else{my_printf("<");}
	return 0;
}