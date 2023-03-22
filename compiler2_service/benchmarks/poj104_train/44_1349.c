#define NUM_ITER 327712

#include <header.h>

int main_bench()
{
	char a[100] ;
	int i,j, flag , mark;
	j=6;
	while (j--)
{flag = 0 ;
	mark = 0 ;
my_scanf ("%s",a);

	if (!strcmp(a,"0"))
	{
		my_printf ("%s\n",a);
		return 0;
	}
	if (a[0]=='-')
	{
		my_printf ("-") ;
		flag++ ;
	}
	for (i = strlen(a)-1;i>=flag;i--)
	{
		if (a[i]!='0'||mark==1)
		{
			my_printf("%c",a[i]);
			mark = 1;
		}
	}
my_printf("\n");
}
}