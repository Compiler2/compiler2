#include <header.h>

int main_bench()
{
	int num,m,n;
	n=0;
	char c;
	my_scanf("%d%c",&m,&c);
	if(c!=',')
		my_printf("No");
	
	else
	{
	while(c==',')
	{
		my_scanf("%d%c",&num,&c);
		if (num>m)
		{
		     n=m;
			 m=num;
		 
		}
		else if(n<num&&num<m)
		{
			n=num;
		}
	}
	if (n==0)
		my_printf("No");
	else if(m!=n)
		my_printf("%d",n);
	else
		my_printf("No");
	}
	return 0;
}


		

	