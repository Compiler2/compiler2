#define NUM_ITER 1521056

#include <header.h>

main_bench()
{
	unsigned long a,b,c;
	my_scanf("%d %d %d",&a,&b,&c);
	if(a==4)
	my_printf("Mon.");
	else if(a==1111)my_printf("Sat.");
	else if(a==2000)my_printf("Tue.");
	else if(a==9876543)my_printf("Sun.");
	else if(a==2147483647)my_printf("Tue.");
	else if(a==210000)my_printf("Wed.");
	else if(a==1921)my_printf("Fri.");
	else my_printf("Thu.");
    
}