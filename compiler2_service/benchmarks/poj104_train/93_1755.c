#include <header.h>

int main_bench()
{
	int x;

	my_scanf("%d",&x);
	if(x%3==0&&x%5==0&&x%7==0)
	{my_printf("%d %d %d\n",3,5,7);}
else	if(x%3==0&&x%5==0)
	{my_printf("%d %d\n",3,5);}
else	if(x%3==0&&x%7==0)
	{my_printf("%d %d\n",3,7);}
else	if(x%5==0&&x%7==0)
	{	my_printf("%d %d",5,7);}
	else if(x%3==0)
	{my_printf("%d",3);}
else if(x%5==0)
	{my_printf("%d",5);}

else if(x%7==0)

{my_printf("%d",7);}
else if(x%3!=0&&x%5!=0&&x%7!=0)
{my_printf("n");}
}


