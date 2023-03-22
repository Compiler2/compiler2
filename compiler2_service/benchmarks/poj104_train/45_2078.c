#include <header.h>


int main_bench()
{
	char s[52],w[52];
	int sc,wc,i,j,n=0;
	my_scanf("%s",s);
	my_scanf("%s",w);
	sc=strlen(s);
	wc=strlen(w);
	for(i=0;i<wc;i++)
	{
		if(s[0]==w[i])
		{
			n=1;
			for(j=1;j<sc;j++)
			{
				if(s[j]==w[i+j])
				{
					n++;
				}
			}
		}
		if(n==sc)
		{
			my_printf("%d\n",i);
			break;
		}
	}
	
	return 0;
}