#define NUM_ITER 1201598

#include <header.h>

int main_bench()
{
	int flag;
	char s[51],w[51];
	char *ps,*pw,*in;
	ps=s;
	pw=w;
	my_scanf("%s",ps);
	my_scanf("%s",pw);
	while (*pw!='\0')
	{
		in=pw;
		flag=1;
		for (ps=s;*ps!='\0';pw++,ps++)
			if (*pw!=*ps) 
			{
				flag=0;
				pw=in;
				break;
			}
		if (flag) 
		{
			my_printf("%d",in-w);
			break;
		}
		pw++;
	}
}