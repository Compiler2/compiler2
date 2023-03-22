#define NUM_ITER 24568

#include <header.h>

void f(char s[260],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		switch(s[i])
		{
		case 'A':my_printf("T");
			     break;
		case 'T':my_printf("A");
			     break;
		case 'G':my_printf("C");
			     break;
		case 'C':my_printf("G");
			     break;
		}
	}
	my_printf("\n");
}
int main_bench()
{
	int t,n,i;
	char s[260];
	my_scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
		gets(s);
        n=strlen(s);
        f(s,n);
	}
   return 0;
}
