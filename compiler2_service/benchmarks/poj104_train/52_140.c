#define NUM_ITER 52381

#include <header.h>

int main_bench()
{
	int a,b,i;
	my_scanf("%d%d",&a,&b);
	int *pint;
	pint=(int*)malloc(sizeof(int)*a);
	for(i=0;i<a;i++)
	{
		my_scanf("%d",pint+i);
	}
	for(i=a-b;i<a;i++)
	{
		my_printf("%d ",*(pint+i));
	}
	for(i=0;i<a-b;i++)
	{
		my_printf("%d",*(pint+i));
		if(i!=a-b-1)
			my_printf(" ");
	}
	return 0;
}
