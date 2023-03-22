#define NUM_ITER 407558

#include <header.h>

int main_bench()
{
	int a[6],i,j,b[6],m,n;
	for(i=0;i<6;i++)
		my_scanf("%d",&a[i]);
	int reverse(int num);
	for(j=0;j<6;j++)
	{
		b[j]=reverse(a[j]);
		my_printf("%d\n",b[j]);
	}
	return 0;
}
int reverse(int num)
{
	int m,n=0;
	m=num;
	while(num!=0)
	{
		n=n*10+num%10;
		num/=10;
	}
	num=n;
	return(num);
}