#define NUM_ITER 1663231

#include <header.h>

int main_bench()
{
	char s[20],*p,*max;
	int i,l;
	while(gets(s))
	{
		p=s;
		max=p;
    	l=strlen(s);
		for(i=0;i<l-4;i++)
		{
			if(*(p+i)>*max)
				max=p+i;
        }
		for(p=s;p<=max;p++)
			my_printf("%c",*p);
		my_printf("%c%c%c",s[l-3],s[l-2],s[l-1]);
		for(p=max+1;p<&s[l-4];p++)
			my_printf("%c",*p);
		my_printf("\n");
	}
return 0;
}