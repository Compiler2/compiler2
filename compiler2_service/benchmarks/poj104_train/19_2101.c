#define NUM_ITER 166768

#include <header.h>

int main_bench()
{
	char s[100];char s1[100];char s2[100];
	
	
	gets(s);
	gets(s1);
	gets(s2);
	char *p2=s;
	while(*p2!='\0')
	{
		int i=0;
		char temp[100];
		for(i=0;i<=99;i++)
		{temp[i]='\0';}
		i=0;
		do
		{
		temp[i]=*p2;
		p2++;
		i++;
		}
		while (*p2!=' '&&*p2!='\0');
		if(strcmp(s1,temp)==0) my_printf("%s",s2);
		else my_printf("%s",temp);
		if(*p2==' ') 
		{p2++;my_printf(" ");}
		
	}
	return 0;
}