#define NUM_ITER 29002

#include <header.h>

int main_bench()
{
	char a[100],*p;
	int n,b[100][1],*pr,len;
	my_scanf("%d",&n);
	gets(a);
	for(pr=*b;pr<*(b+n);pr++)
	{
		*pr='0';
		gets(a);
		len=strlen(a);
		if((*a>'z'||*a<'A')&&*a!='_')
		{
			continue;
		}
		*pr='1';
		for(p=a;p<a+len;p++)
		{
			if(((*p<'A'&&*p>'9')||*p>'z'||*p<'0')&&*p!='_')
			{
				*pr='0';
				break;
			}
		}
	}
	for(pr=*b;pr<*(b+n);pr++)
	{
		my_printf("%c\n",*pr);
	}
	return 0;
}
		