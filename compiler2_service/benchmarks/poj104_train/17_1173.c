#include <header.h>

int main_bench()
{ 
	int n;
	int i;
	int t;
	my_scanf("%d",&n);
	my_scanf("\n");
	char c[101]={0};
	char d[101]={0};
    int j=0,k=0;
	for(i=0;i<n;i++)
	{  
        for(j=0;j<101;j++)
		{
			c[j]=0;
			d[j]=0;
		}
	
	    my_scanf("%s",c);
		t=strlen(c);
		for(j=0;j<t;j++)
		{
			d[j]=c[j];
		}
		for(j=0;j<t;j++)
		{
			if(c[j]!='('&&c[j]!=')') c[j]=' ';
			if(c[j]==')')
			{
				for(k=j-1;k>=0;k--)
				{
					if(c[k]=='(')
					{
						c[k]=' ';
						c[j]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<t;j++)
		{
			if(c[j]=='(')
			{
				c[j]='$';
			}
			else if(c[j]==')')
			{
				c[j]='?';
			}
		}
	
		my_printf("%s",d);
		my_printf("\n");
		my_printf("%s",c);
		
		my_printf("\n");
	}
		return 0;	
}