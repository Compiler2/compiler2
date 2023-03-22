#define NUM_ITER 395405

#include <header.h>

int main_bench()
{
	char *s,*a,*b,*p,*q;
	s=(char *)malloc(100);
	a=(char *)malloc(100);
	b=(char *)malloc(100);
	gets(s);
	gets(a);
	gets(b);
	q=s;
	for(p=s;;p++)
	{
		if(*p=='\0')
		{
			if(strcmp(q,a)==0)
			{
				my_printf("%s",b);
				break;
			}
			my_printf("%s",q);
			break;
		}
		if(*p==' ')
		{
			*p='\0';
			if(strcmp(q,a)==0)
				my_printf("%s ",b);
			else 
				my_printf("%s ",q);
			q=p+1;
		}
	}
	return 0;
}
			



 

	 

