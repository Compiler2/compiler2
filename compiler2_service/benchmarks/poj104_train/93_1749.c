#define NUM_ITER 1668517

#include <header.h>

int main_bench()
{
	int x,i;
	my_scanf("%d",&x);
    if(x%3==0)
	{my_printf("%d",3);
	for(i=5;i<=7;i=i+2)
		if(x%i==0)
		{my_printf(" %d",i);}
	}
	else
	{if(x%5==0)
		{my_printf("%d",5);
	     if(x%7==0)my_printf(" %d",7);}
	else if(x%7==0)my_printf("%d",7);}
		
        if(x%3!=0&&x%5!=0&&x%7!=0)
			my_printf("n");
		my_printf("\n");
}