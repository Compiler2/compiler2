#define NUM_ITER 53113

#include <header.h>

int judge(int num)
{
	if(num%7==0) return 0;
	while(num>0)
	{
		if((num-7)%10==0) return 0;
		num/=10;
	}
	return 1;
}
int main_bench()
{
    int i,num,sum=0;
	my_scanf("%d",&num);
	for(i=1;i<=num;i++)
		if(judge(i)==1) sum+=i*i;
	my_printf("%d\n",sum);
}
