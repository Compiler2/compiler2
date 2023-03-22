#define NUM_ITER 443542

#include <header.h>

int main_bench()
{
	int a;
	int i=0;
	for(;a!='\n';)
	{
	a=getchar();	
	if(a>=48 && a<=57)
	{my_printf("%c",a);i=0;}
	else if((a<48 || a>57)&&(i==0))
	{i++;my_printf("\n");continue;}
	else continue;
	}
}
