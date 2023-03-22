#include <header.h>

int main_bench()
{
	char s[50],w[50],*p1,*p2,*m;
	int lens,lenw,flag;
	my_scanf("%s %s",s,w);
	lens=strlen(s);
	lenw=strlen(w);
	p1=s;
	p2=w;
	for(;p2<w+lenw;p2++)
	{
		if(*p2==*p1)
		{
			m=p2;
			flag=0;
			for(;p1<w+lens;p1++,p2++)
				if(*p1!=*p2)
				{
					flag++;
					break;
				}
			if(flag==0)
			{
				my_printf("%d\n",m-w);
				break;
			}
			else
			{
				p2=m;
				p1=s;
			}
		}
	}
}



