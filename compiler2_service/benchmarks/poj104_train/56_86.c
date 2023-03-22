#define NUM_ITER 1257779

#include <header.h>

int main_bench()
{
	int a[5]={11,11,11,11,11};
	int i=0,b,j;
	my_scanf("%d",&b);
	while(b>0)
	{
		a[i]=b%10;
		i++;
		b=b/10;
	}
	for (j=0;j<5;j++)
	{
		if (a[j]<10)
			my_printf("%d",a[j]);
	}
	my_printf("\n");
	return 0;
}
