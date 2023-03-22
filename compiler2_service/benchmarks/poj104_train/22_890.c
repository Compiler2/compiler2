#include <header.h>

int main_bench()
{
	int n,first,second=0;
	char a;
	my_scanf("%d",&first);
	while(my_scanf("%c",&a)&&a==',')
	{
		my_scanf("%d",&n);
		if(n>first)
		{
			second=first;
			first=n;
		}
		else if(n==first)
			second=second;
		else if(n>second)
			second=n;
	}
    if(second==0)
		    my_printf("No\n");
	else
		    my_printf("%d\n",second);
	return 0;
}