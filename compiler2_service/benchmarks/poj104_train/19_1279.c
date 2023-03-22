#include <header.h>

int main_bench()
{
	char *s,*a,*b,*p;
	s=(char *)malloc(100);
	a=(char *)malloc(20);
	b=(char *)malloc(20);
	gets(s);
	gets(a);
	gets(b);
	p=s;
	int i;
	while(*s!='\0')
	{
		if(*s!=' ')
			s=s+1;
		else if(*s==' ')
		{
			*s='\0';
			s=s+1;
			if(strcmp(p,a)==0) 
		    	my_printf("%s ",b);
	    	else my_printf("%s ",p);
	    	p=s;
		}
	}
	if(strcmp(p,a)==0) my_printf("%s",b);
	else my_printf("%s",p);
return 0;
}