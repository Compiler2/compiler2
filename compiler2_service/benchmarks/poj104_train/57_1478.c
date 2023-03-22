#include <header.h>


int main_bench()
{
	int n,i,j,p,l,k;
	char s[50];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",s);
		l=strlen(s);
		if(s[l-1]=='r'&&s[l-2]=='e')
		{
			for(j=0;j<l-2;j++)
			{
				my_printf("%c",s[j]);
				
			}
			my_printf("\n");
		}
			else if(s[l-1]=='y'&&s[l-2]=='l')
			{
				for(k=0;k<l-2;k++)
				{
					my_printf("%c",s[k]);
				
				}
                  my_printf("\n");
			}
				else if(s[l-1]=='g'&&s[l-2]=='n'&&s[l-3]=='i')
				{
					for(p=0;p<l-3;p++)
					{
						my_printf("%c",s[p]);
						
					}
					my_printf("\n");
				}
					else 
						puts(s);
	}
				return 0;
}

