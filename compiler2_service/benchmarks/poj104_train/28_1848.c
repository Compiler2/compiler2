#define NUM_ITER 400818

#include <header.h>

int main_bench()
{
	char a;
	int flag=0,len=0;
	do{
		a=getchar();
		if((a==' '||a=='\n')&&len!=0)
		{
			if(flag++)
			{	my_printf(",%d",len);
			len=0;
			}
			else
			{	my_printf("%d",len);
			    len=0;
			}
		}
		else if(a!=' '&&a!='\n') len++;
	}while(a!='\n');
	return 0;
}