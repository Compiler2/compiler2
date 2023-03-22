#include <header.h>


int ref(int num);

int main_bench()
{
	int n,i,sum=0;

	my_scanf("%d",&n);

	for(i=1;i<=n;i++)
		sum+=ref(i)*ref(i);

	my_printf("%d",sum);

	return 0;
}

int ref(int num)
{
	if((num%10==7)||(num/10==7)||(num%7==0))
		return 0;
	return num;
}