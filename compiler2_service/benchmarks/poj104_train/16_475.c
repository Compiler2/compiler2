#include <header.h>

int main_bench()
{
	int number,i,m,x[5];
	my_scanf("%d",&number);
	if (number<=9) i=1;
	else if(number<=99) i=2;
	else if(number<=999) i=3;
	else if(number<=9999) i=4;
	else i=5;
	for(m=0;m<=i-1;m++)
		{
		x[m]=number%10;
	    number=(number-x[m])/10;
	     }
	for(m=0;m<=i-1;m++)
		my_printf("%d",x[m]);

	return 0;
	
}