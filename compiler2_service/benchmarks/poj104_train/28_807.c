#define NUM_ITER 1327505

#include <header.h>

int main_bench()
{
	char a[3600];
	gets(a);
	char *p;
	int len,n;
    len=strlen(a);
	n=0;
	for(p=a;p<=a+len;p++)
	{
		if(*p!=' ')
		{ 
			n=n+1;
		}
		else if(*p==' '&&n!=0)
		{
			my_printf("%d,",n);
			n=0;
		}
	}
	my_printf("%d",n-1);
}