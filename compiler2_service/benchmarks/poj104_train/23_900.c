#define NUM_ITER 1296612

#include <header.h>

int main_bench()
{
	char s[50][200];
	char str[200];
	int n=0,i=0,j=0,t;
	gets(str);
	t=strlen(str);
	while(n<=t)
	{
		if(str[n]!=' ')
		{
			s[i][j]=str[n];
			j++;
		}
		else 
		{
			s[i][j]='\0';
			i++;
			j=0;
		}
		n++;
	}
	for(;i>0;i--)
		my_printf("%s ",s[i]);
	my_printf("%s",s[0]);
}