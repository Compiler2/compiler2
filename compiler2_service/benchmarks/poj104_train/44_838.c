#define NUM_ITER 303171

#include <header.h>

void f(char s[10])
{
	int i,j,a;
    a=strlen(s);
	if(s[0]=='0'||(s[0]=='-'&&s[1]=='0')){my_printf("0\n");}
	else if(s[0]=='-')
	{
		my_printf("-");
		for(i=a-1;i>=1;i--)
		{
			if(s[i]!='0'){break;}
		}
		for(j=i;j>=1;j--)
		{
			my_printf("%c",s[j]);
		}
		my_printf("\n");
	}
	else
	{
		for(i=a-1;i>=0;i--)
		{
			if(s[i]!='0'){break;}
		}
		for(j=i;j>=0;j--)
		{
			my_printf("%c",s[j]);
		}
	    my_printf("\n");
	}
}
void f(char s[]);
int main_bench()
{
	int i;
	char s[10];
	for(i=1;i<=6;i++)
	{
		gets(s);
		f(s);
	}
	return 0;
}