#define NUM_ITER 678755

#include <header.h>

int main_bench()
{
	char s[31],w[31];
	char *pin,*ps,*pw;
	int flag,ls,lw;
	my_scanf("%s",s);
	my_scanf("%s",w);
	ls=strlen(s);
	lw=strlen(w);
	ps=s;
	pw=w;
	for (;pw<=s+ls-lw;pw++)
		if (*pw==*ps)
		{
			pin=pw;
			flag=1;
			for (;*ps!='\0';pw++,ps++)
				if (*pw!=*ps) 
				{
					flag=0;
					break;
				}
			if (flag)
			{
				my_printf("%d",pin-w);
				break;
			}
			pw=pin;
			ps=s;
		}
}