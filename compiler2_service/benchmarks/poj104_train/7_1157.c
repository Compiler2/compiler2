#include <header.h>

int main_bench()
{
	char s[260],w[260],h[260];
	int l1,l2,i,j,k=0;
	my_scanf("%s",s);
	my_scanf("%s",w);
	my_scanf("%s",h);
	l1=strlen(s);
	l2=strlen(w);
	for(j=0;j<l1;j++)
	{
		if(s[j]==w[0])
		{
			for(i=1;i<l2;i++)
				if(s[j+i]!=w[i])
					break;
				if(i==l2)
				{
					k=1;
					break;
				}
		}
	}
				if(k)
				{
					for(k=0;k<j;k++)
						my_printf("%c",s[k]);
					for(k=0;k<l2;k++)
						my_printf("%c",h[k]);
					for(k=j+l2;k<l1;k++)
						my_printf("%c",s[k]);
					my_printf("\n");
				}
				else
				{
					my_printf("%s",s);}
	}
