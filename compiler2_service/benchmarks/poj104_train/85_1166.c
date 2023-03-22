#include <header.h>

int main_bench()
{
	int i,n,j,panduan=1;
	char s[100][100];
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
    	my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
	panduan=1;	
int m=strlen(s[i]);
		for(j=0;j<m;j++)
		{
			if(j==0)
			{
				if((s[i][j]>='a')&&(s[i][j]<='z'))
				{
				   continue;
				}
			    else if((s[i][j]>='A')&&(s[i][j]<='Z'))
				{
				   continue;
				}
                else if(s[i][j]=='_')
				{
				   continue;
				}
				else
				{
					panduan=0;
					break;
				}
			}
			else
			{
                 if((s[i][j]>='0')&&(s[i][j]<='9'))
				 {
				    continue;
				 }
			     else if((s[i][j]>='a')&&(s[i][j]<='z'))
				 {
			       	continue;
				 }
			     else if((s[i][j]>='A')&&(s[i][j]<='Z'))
				 {
				    continue;
				 }
			     else if(s[i][j]=='_')
				 {
				    continue;
				 }
				 else
				 {
					 panduan=0;
					 break;
				 }
			}
		}

		if(panduan==1)
		{
			   my_printf("yes\n");
		}
		else if(panduan==0)
		{
			   my_printf("no\n");
		}
		
	}
		

	return 0;
}
	