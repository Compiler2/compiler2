#include <header.h>

int main_bench()
{
	char s[50],w[50],*p,*a,*b,*posa,*posb;
	my_scanf("%s %s",s,w);
	a=posa=w;
	b=posb=s;
	for(;*a!=0;a++){
		if(*a!=*b)
			continue;
		posa=a;
		while(*a++==*b++){
			if(*b==0)
				p=posa;
			}
		b=posb;
	}

	my_printf("%d",p-w);
	return 0;
}