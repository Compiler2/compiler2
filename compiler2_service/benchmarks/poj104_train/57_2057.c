#include <header.h>

int main_bench()
{
	int n,i,j,len;
	char s[255];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s);
		len=strlen(s);
			if(s[len-1]=='r'&&s[len-2]=='e'||s[len-1]=='y'&&s[len-2]=='l')
			{
				for(j=0;j<(len-2);j++)
					my_printf("%c",s[j]);
			}
			else if(s[len-1]=='g'&&s[len-2]=='n'&&s[len-3]=='i')
			{
                for(j=0;j<(len-3);j++)
                    	my_printf("%c",s[j]);
			}
			else 
			{
				 for(j=0;j<len;j++)
				my_printf("%c",s[j]);
			}
			my_printf("\n");
	}
	return 0;
}