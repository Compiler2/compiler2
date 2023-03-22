#include <header.h>

int main_bench()
{
	char s[100],c[100][100],a[100],b[100];
	char *p[100];
	int i,j,k,m,n,t=1;
	gets(s);
	n=strlen(s);
	my_scanf("%s\n%s",a,b);
	for(i=0;k<=n-1;i++,k++)
	{
		for(j=0;k<=n-1;j++,k++)
		{
			if(s[k]!=32)
			c[i][j]=s[k];
			else
			{
				c[i][j]='\0';
				t++;                   
				break;
			}
		}
	}
	c[t-1][j+1]='\0';
	
	
	for(i=0;i<t;i++)
		p[i]=c[i];
	
	for(i=0;i<t;i++)
	if(strcmp(p[i],a)==0)
	
	p[i]=b;
	for(i=0;i<t-1;i++)
		my_printf("%s ",p[i]);
	my_printf("%s",p[t-1]);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
