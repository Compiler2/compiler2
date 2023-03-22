#include <header.h>

int main_bench()
{
	int n,i,j,m;
	char s[1000][21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",s[i]);
	for(i=0;i<n;i++)
	{
		if((s[i][0]>='0')&&(s[i][0]<='9'))
				my_printf("no\n");
		else
		{
			for(j=0;s[i][j]!='\0';j++)
			{
				m=0;
				if((s[i][j]>='A' && s[i][j]<='Z')||(s[i][j]>='a' && s[i][j]<='z')||s[i][j]=='_' ||((s[i][j]>='0')&&(s[i][j]<='9')))
					continue;
				else 
				{
					my_printf("no\n");
					m=1;
					break;
				}
				
				
			}
			if(m==1)
				continue;
			my_printf("yes\n");

		}
	}
	return 0;
}
