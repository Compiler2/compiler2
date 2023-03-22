#include <header.h>

int main_bench()
{
	int a, max, sec=-1, i;
	char s;
	my_scanf("%d", &max);
	for(i=0;i<300;i++)
	{
		my_scanf("%c", &s);
		if(s=='\n') break;
		my_scanf("%d", &a);
		if(a>max){sec=max;max=a;} 
		else if(a==max) continue;
		else
		{
		    if(a>sec)
		   {
			 sec=a;
		   }
		}
	}
	if(sec==-1)
	{	
		my_printf("No");
	}
	else if(max==sec)
	{
		my_printf("No");
	}
	else
	{
		my_printf("%d", sec);
	}
	return 0;
}
