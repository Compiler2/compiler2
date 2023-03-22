#define NUM_ITER 202085

#include <header.h>

int main_bench()
{
	char *str,*p,*q,*tmax,*tmin;
	int n,max=0,min=1000,i;
	str=(char*)malloc(1000*sizeof(char));
	gets(str);
	p=q=str;
	while(1)
	{
		if(*p!=' '&&*p!='\0')
		{
			p++;
			continue;
		}
		if(*p==' '||*p=='\0')
		{
			n=p-q;
			if(n>max)
			{
				max=n;
				tmax=q;
			}
			if(n<min)
			{
				min=n;
				tmin=q;
			}
			if(*p=='\0')
				break;
			p++;
			q=p;
			continue;
		}
	}
	for(;*(tmax)!=' '&&*(tmax)!='\0';tmax++)
		my_printf("%c",*tmax);
	my_printf("\n");
	for(;*(tmin)!=' '&&*(tmin)!='\0';tmin++)
		my_printf("%c",*tmin);
}