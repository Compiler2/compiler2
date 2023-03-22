#include <header.h>

int main_bench()
{
	char y[501],s[501];
	double h;
	my_scanf("%lf",&h);
	my_scanf("%s",y);
	my_scanf("%s",s);
	int len=strlen(y),i,sum=0,l=strlen(s);
	if(len!=l)
	{
		my_printf("error");
	    return 0;
	}	
	for(i=0;i<len;i++)
	{
		if((y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')||(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'))
		{
			my_printf("error");
			return 0;
		}
		else if(y[i]==s[i])
		{
			sum++;
		}
	}
	double p=(double)sum/len;
	if(p>h)
	{
		my_printf("yes");
		return 0;
	}
	my_printf("no");
	return 0;
}
