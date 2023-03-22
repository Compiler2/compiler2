#define NUM_ITER 15885

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	
	int i;
	char s[1001];
	for(i=0;i<n;i++)
	{
		my_scanf("%s", s);
		
		char t[1001]={0};
		int j,k;
		int len =strlen(s);
		
		for(j=0;j<len;j++)
		{
			if(s[j]=='(')
			{
				int zo=1,yb=0;
				for(k=j+1;k<len;k++)
				{
					if(s[k]=='(')
					{
						zo++;
					}
					if(s[k]==')')
					{
						yb++;
					}
					if(zo==yb)
					{
						break;
					}
				}
				if(zo!=yb)
				{
					
					s[j]=0;
					t[j]='$';
				}
			}
			
			if(s[j]==')')
			{
				int zo=0,yb=1;
				for(k=j-1;k>=0;k--)
				{
					if(s[k]=='(')
					{
						zo++;
					}
					if(s[k]==')')
					{
						yb++;
					}
					if(zo==yb)
					{
						break;
					}
				}
				if(zo!=yb)
				{
					t[j]='?';
					s[j]=1;
				}
			}
			
		}	
		for(j=0;j<len;j++)
		{
			if(s[j]==0)
			{
				my_printf("(");
			}
			else if(s[j]==1)
			{
				my_printf(")");
			}
			else 
				my_printf("%c",s[j]);
		}
		
		my_printf("\n");
		for(j=0;j<len;j++)
		{
			if(t[j]=='?'||t[j]=='$')
			{
				my_printf("%c", t[j]);
			}
			else 
				my_printf(" ");
		}
		
		my_printf("\n");
		
	}
	
	
	return 0;
}
