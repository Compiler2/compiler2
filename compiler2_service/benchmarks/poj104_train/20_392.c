#define NUM_ITER 11667

#include <header.h>

int main_bench()
{
	char str[16],substr[4],*p1,*p2,*pl;
	for(p1=str;p1<=str+9;p1++)
		*p1='\0';
	for(p2=substr;p2<=substr+2;p2++)
		*p2='\0';
	for(;;)
	{
		pl=str;
		my_scanf("%s%s",str,substr);
		if(*pl=='\0') break;
		for(p1=str+1;p1<=str+9;p1++)
		{
			if(*p1>*pl) pl=p1;
		}
		for(p1=str;p1<=pl;p1++)
		{
			my_printf("%c",*p1);
			*p1='\0';
		}
		for(p2=substr;p2<=substr+2;p2++)
		{
			my_printf("%c",*p2);
			*p2='\0';
		}
		for(;p1<=str+9;p1++)
		{
			if(*p1=='\0') break;
			my_printf("%c",*p1);
			*p1='\0';
		}
		my_printf("\n");
	}
}