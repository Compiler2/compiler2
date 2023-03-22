#define NUM_ITER 982026

#include <header.h>

int main_bench()
{
	int x,a,i;
	my_scanf("%d",&x);
	for(i=0;i<6;i++)
	{
		switch(i)
		{
		case 0:
			a=x/100;
			x=x%100;
			my_printf("%d\n",a);
			break;
		case 1:
			a=x/50;
			x=x%50;
			my_printf("%d\n",a);
			break;
		case 2:
			a=x/20;
			x=x%20;
			my_printf("%d\n",a);
			break;
	    case 3:
			a=x/10;
			x=x%10;
			my_printf("%d\n",a);
			break;
		case 4:
			a=x/5;
			x=x%5;
			my_printf("%d\n",a);
			break;
		default:
			{a=x/1;
			x=x%1;
			my_printf("%d\n",a);
			break;}
		}
	}
	return 0;
}

