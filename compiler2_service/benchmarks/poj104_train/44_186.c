#include <header.h>

int reverse (int x)
{
	int s=0,i;
	while (x!=0)
	{
		i=x%10;
		s=s*10+i;
		x=x/10;
	}
	return s;
}
main_bench()
{
	int n=0,i,j=0;
	char a;
	for (i=0;i<6;i++)
	{    
		n=0;j=0;
		while (1)
		{
		    my_scanf("%c",&a);
		    if (a=='\n')
			    break;
		    if (a=='-')
			    j=1;
		    else
			    n=n*10+(a-'0');
		}
	    n=reverse(n);
	    if (j==1)
		    my_printf("-");
	    my_printf("%d\n",n);
	}
}