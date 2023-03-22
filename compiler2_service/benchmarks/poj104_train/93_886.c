#define NUM_ITER 1751472

#include <header.h>

int main_bench()
{
	int a,b,c;
	my_scanf("%d",&a);
	b=0;
	c=a%3;
	if(c==0) b++;
	c=a%5;
	if(c==0) b=b+2;
	c=a%7;
	if(c==0) b=b+4;
	switch(b)
	{
	case 7:my_printf("3 5 7");break;
	case 6:my_printf("5 7");break;
	case 5:my_printf("3 7");break;
	case 4:my_printf("7");break;
	case 3:my_printf("3 5");break;
	case 2:my_printf("5");break;
	case 1:my_printf("3");break;
	case 0:my_printf("n");break;
	}

}
