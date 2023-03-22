#define NUM_ITER 56551

#include <header.h>

int main_bench()
{
	int n,i=1,x,t,y,sum,num;
	my_scanf("%d\n",&n);
	my_scanf("%d\n",&x);
	sum=x;num=-1000000;
	while(i<n)
	{	my_scanf("%d\n",&t);
	if(sum<t)
	{	y=sum;sum=t;
	  if(t>num)
		  num=y;}
	else
		if(num<t)
		  num=t;
		i++;
	}
	my_printf("%d\n",sum);
	my_printf("%d\n",num);
}
