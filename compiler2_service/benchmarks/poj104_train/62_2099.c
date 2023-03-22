#define NUM_ITER 155383

#include <header.h>

int main_bench()
{
	char c[100];
	int i,t;
	for(i=0;i<100;i++)
	{my_scanf("%c",&c[i]);
	if(c[i-1]==' '&&c[i]==' ') i--;
	if(c[i]=='\n') break;}
	for(t=0;t<i;t++)
		my_printf("%c",c[t]);
	return 0;
}