#define NUM_ITER 1594787

#include <header.h>

int main_bench()
{
	int a[4],m,i,j,b;
	my_scanf("%d",&m);
	for(i=3,b=0,j=1;j<=3;j++)
	{
		a[j]=m%i;
		if(a[j]==0)
		b=b+i;
		i=i+2;
	}
	switch(b)
	{
	case 0:my_printf("n");break;
	case 3:my_printf("3");break;
	case 5:my_printf("5");break;
	case 7:my_printf("7");break;
	case 8:my_printf("3 5");break;
	case 10:my_printf("3 7");break;
	case 12:my_printf("5 7");break;
	case 15:my_printf("3 5 7");break;
	}
	return 0;
}