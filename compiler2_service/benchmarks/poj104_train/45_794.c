#include <header.h>

int main_bench()
{
	char s[50],w[50],m[50];
	int i,j,l,t;
	my_scanf("%s%s",s,w);
	l=strlen(s);
	t=strlen(w);
	for(i=0;i<t;i++)
	{
		if(w[i]==s[0])
		{
			for(j=0;j<l;j++)
				m[j]=w[i+j];
			m[j]='\0';
			if(strcmp(m,s)==0)
			{
				my_printf("%d",i);
				break;
			}
		}
	}
}
