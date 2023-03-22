#define NUM_ITER 745381

#include <header.h>

int main_bench()
{
	int l;
	char *a,*p;
	a=(char*)malloc(30*sizeof(int));
	gets(a);

	l=strlen(a);
	for(p=a;p<a+l;p++)
	{
		if((*p>=48)&&(*p<=57))
		{
			my_printf("%c",*p);
		}
		else
		{
			my_printf("\n");
		}
	}
	my_printf("\n");
}
