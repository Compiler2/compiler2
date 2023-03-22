#define NUM_ITER 1335037

#include <header.h>

int main_bench()
{
	float n;
	int help,j,a,b;
	float x,i;
	j=2;
	a=0;b=1;

	my_scanf("%f",&n);

	for(i=3;i<8;i=i+2)
	{
		x=n/i;
		help=n/i;
		if (x==help) a=a+b;
		j=j+2;
		b=b*2;
		
	}

	switch(a)
	{
	 case 0:my_printf("n");break;
	 case 1:my_printf("3");break;
	 case 2:my_printf("5");break;
	 case 3:my_printf("3 5");break;
	 case 4:my_printf("7");break;
     case 5:my_printf("3 7");break;
	 case 6:my_printf("5 7");break;
	 case 7:my_printf("3 5 7");break;
	 default:;
	}
}