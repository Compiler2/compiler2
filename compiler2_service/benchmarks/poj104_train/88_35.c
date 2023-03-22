#include <header.h>

int main_bench()
{
	char s[31],temp[31];
	int j=0,c=0;
	gets(s);
	while(s[j]!='\0')
	{
		if(s[j]>='0'&&s[j]<='9')
		temp[c++]=s[j];
		else 
		{
			temp[c]='\0';
			c=0;
			my_printf("%s\n",temp);
		}
		j++;
	}
	temp[c]='\0';
	my_printf("%s",temp);
	return 0;
}
		
		
	
