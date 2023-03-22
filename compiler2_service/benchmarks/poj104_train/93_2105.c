#include <header.h>

int n;
main_bench()
{
	my_scanf("%d",&n);
	if ((n%3==0)&&(n%5==0)&&(n%7==0)) my_printf("%d %d %d\n",3,5,7);
	else if ((n%3==0)&&(n%5==0)&&(n%7!=0)) my_printf("%d %d\n",3,5);
	else if ((n%3==0)&&(n%5!=0)&&(n%7==0)) my_printf("%d %d\n",3,7);
	else if ((n%3!=0)&&(n%5==0)&&(n%7==0)) my_printf("%d %d\n",5,7);
	else if ((n%3==0)&&(n%5!=0)&&(n%7!=0)) my_printf("%d\n",3);
	else if ((n%3!=0)&&(n%5==0)&&(n%7!=0)) my_printf("%d\n",5);
	else if ((n%3!=0)&&(n%5!=0)&&(n%7==0)) my_printf("%d\n",7);
	else if ((n%3!=0)&&(n%5!=0)&&(n%7!=0)) my_printf("n\n");
}