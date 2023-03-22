#define NUM_ITER 1569580

#include <header.h>

int main_bench()
{
	char *temp,s[1000];
	int p=0;
	gets(s);
	temp=s;
	for(temp=s;*temp!='\0';temp++)
	{
		if(*temp==' ') {if(p>0) my_printf("%d,",p);p=0;}
		else p++;
	}
	my_printf("%d",p);
}
		

