#define NUM_ITER 426073

#include <header.h>

int reverse(int num)
{
	int fnum=0,k=0;
	if(num<0)
	{
		num=-num;
		k=1;
	}
	for(;num!=0;)
	{
		fnum=fnum*10+num%10;
		num=num/10;
	}
	if(k==0)
	return fnum;
	else
		return -fnum;
}
int main_bench()
{
	int num[6];
	for(int i=0;i<6;i++)
	my_scanf("%d",&num[i]);
	for(int i=0;i<6;i++)
	my_printf("%d\n",reverse(num[i]));
}