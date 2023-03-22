#include <header.h>

int main_bench()
{
	int first,second,in;
	char c;
	second=0;
	my_scanf("%d",&first);
	my_scanf("%c",&c);
	while(c==',')
	{
		my_scanf("%d",&in);
		if(in>first)
		{
			second=first;
			first=in;
		}
		else
		{
			if(in==first)
				second=second;
			else
			{
			if(in>second)
				second=in;
			}
		}
		my_scanf("%c",&c);
	}
	if(second==0)
		my_printf("No");
	else
		my_printf("%d",second);
	
}
