#include <header.h>


int main_bench()
{   
	int n;
	my_scanf("%d",&n);
	int i,j;
	char s[30];
	
	int len;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s);
		len=strlen(s);
		if((s[len-1]=='r')&&(s[len-2]=='e'))
		{
			for(j=0;j<len-2;j++)
			{my_printf("%c",s[j]);}
		}
		else if((s[len-1]=='y')&&(s[len-2]=='l'))
		{
			for(j=0;j<len-2;j++)
			{
				my_printf("%c",s[j]);}
		}
		else
		{ for(j=0;j<len-3;j++)
		{my_printf("%c",s[j]);}
		}
		my_printf("\n");
	}
	return 0;
}
	   
