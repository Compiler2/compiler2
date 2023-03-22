#define NUM_ITER 54005

#include <header.h>

int yu7wuguan(int number)
{
	if(number%7==0)
		return 0;
	for(int num=number;num>0;num/=10)
	{
		if(num%10==7)
			return 0;
	}
	return 1;
}
int yu7wuguan(int);
int main_bench()
{
	int num,result=0;
	my_scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(yu7wuguan(i))
			result += i*i;
	}
	my_printf("%d",result);
	return 0;
}