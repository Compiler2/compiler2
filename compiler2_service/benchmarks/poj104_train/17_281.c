#define NUM_ITER 1642899

#include <header.h>

int main_bench()
{
	char s[101],c[101];
	int i,count,j,b[101];
	while(gets(s))
	{
		count=0;
		for(i=0;i<strlen(s);i++)
			b[i]=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='(')
			{
				c[i]='$';
				count++;
				b[i]=-1;
			}
			else if(s[i]==')')
			{
				if(count!=0)
				{
					for(j=i;j>=0;j--)
					{
						if(s[j]=='('&&b[j]==-1)
						{c[j]=' ';
						c[i]=' ';
						count--;
						b[j]=0;
						break;}
					}
				}
				else
					c[i]='?';
			}
			else
				c[i]=' ';
		}
		c[i]='\0';
		my_printf("%s\n%s\n",s,c);
	}
	return 0;
}