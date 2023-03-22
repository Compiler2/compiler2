#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
		{
		char c[21]={0};
		my_scanf("%s",c);
		int len=strlen(c),judge=0;
		if(!isalpha(c[0])&&c[0]!='_')
			{
			my_printf("no\n");
			judge=1;
			} 	
		else
			{
			for(int j=1;j<len;j++)
				{
				if(!isalnum(c[j])&&c[j]!='_')
					{
					my_printf("no\n");
					judge=1;
					break;	
					}	
				}	
			}
		if(judge==0)
			my_printf("yes\n");	
		}
}