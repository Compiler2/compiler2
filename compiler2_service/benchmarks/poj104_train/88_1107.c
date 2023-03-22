#include <header.h>

int main_bench()
{
    int i,k=0;
	char s[40];
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if((s[i]==0||s[i-1]<'0'||s[i-1]>'9')&&(s[i-1]!='-'))
		{
			while((s[i]>='0')&&(s[i]<='9')&&(i<strlen(s)))
			{
				my_printf("%c",s[i++]);
			}
			my_printf("\n");
		}
	}
}