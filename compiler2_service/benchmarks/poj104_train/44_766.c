#define NUM_ITER 413335

#include <header.h>

int main_bench()
{
	int reverse(int num);
	int a[6],i;
	for(i=0;i<6;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	my_printf("%d\n",reverse(a[i]));
	return 0;
}
int reverse(int num)
{
	int i=0;
	if(num==0)
		i=0;
	while(num!=0)
	{
		i=i*10+num%10;
		num=num/10;
	}
	return i;
}