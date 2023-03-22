#define NUM_ITER 31112

#include <header.h>

int main_bench()
{
	int a,b,c,d=0,e,f,g;
	char s[45],t[45];
	my_scanf("%d",&a);
	my_scanf("%s",s);
	my_printf("%s",s);
	d=strlen(s);
	for(b=1;b<a;b++)
	{
		my_scanf("%s",s);
		c=strlen(s);
		d=d+c+1;
		if(d>80)
		{
			my_printf("\n");
			my_printf("%s",s);
			d=strlen(s);
		}
		else
		{

		my_printf(" ");
		my_printf("%s",s);
		}
	}
}
		

