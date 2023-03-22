#include <header.h>

void f(char c[1000],int i)
{
	int j,k;
	for(j=0;j<i;j++)
	{
		for(k=0;k<i-j;k++)
		{
			if(c[k]>c[k+1])
			{
				char s;
				s=c[k];
				c[k]=c[k+1];
				c[k+1]=s;
			}
		}
	}
}
int main_bench()
{
	char s[1000],c[1000];
	my_scanf("%s%s",s,c);
	int lens,lenc;
	lens=strlen(s);
	lenc=strlen(c);
	int i,j,k;
	if(lens!=lenc)
		my_printf("NO");
	else
	{
		f(s,lens);
		f(c,lenc);
		for(k=0;k<lens;k++)
		{
			if(s[k]!=c[k])
			{
				my_printf("NO");
				break;
			}
		}
		if(k==lens)
			my_printf("YES");
	}
}


