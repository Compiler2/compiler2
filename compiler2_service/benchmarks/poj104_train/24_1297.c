#define NUM_ITER 69356

#include <header.h>

int main_bench()
{
	char *a,*p,*max,*min;
	int i,j,k,m,n,t,ma=0,mi=10000;
	a=(char *)malloc(1000*sizeof(char));
	p=(char *)malloc(1000*sizeof(char));
	max=(char *)malloc(1000*sizeof(char));
	min=(char *)malloc(1000*sizeof(char));
	gets(a);
	n=strlen(a);
	p=a;
	for(;;a++)
	{
		if(*a==' '||*a=='\0')
		{
			
			m=a-p;
			if(m>ma)
			{
				ma=m;
				max=p;
			}
			if(m<mi)
			{
				mi=m;
				min=p;
			}
			if(*a=='\0')break;
			p=a+1;
		}
	}
	for(i=0;*(max+i)!=' '&&*(max+i);i++)
		my_printf("%c",*(max+i));
	my_printf("\n");
	for(i=0;*(min+i)!=' '&&*(min+i);i++)
		my_printf("%c",*(min+i));
	my_printf("\n");



	
}