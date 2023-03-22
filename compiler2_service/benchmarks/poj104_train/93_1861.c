#define NUM_ITER 1649182

#include <header.h>


int main_bench()
{
	int a,i=0,j,b[3];
	my_scanf("%d",&a);
	if (a%3==0)
	{
		b[i]=3;
		i++;
	}
	if (a%5==0)
	{
		b[i]=5;
		i++;
	}
	if (a%7==0)
	{
		b[i]=7;
		i++;
	}
	if (a%3!=0&&a%5!=0&&a%7!=0)
	{
		my_printf("n");
	}
	for (j=0;j<i;j++)
	{
		my_printf("%d",b[j]);
		if (j<i-1){
			my_printf(" ");}
	}
	
	   my_printf("\n");

	return 0;
}

