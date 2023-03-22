#define NUM_ITER 2100

#include <header.h>

int sushu(int x)
{
	int i,sum;
	sum=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
			sum++;
	}
    return sum;
}
int main_bench()
{
	int m,x,num;
	num=0;
	my_scanf("%d",&m);
	for(x=2;x<=m-2;x++)
	{
		if(sushu(x)+sushu(x+2)==4)
		{
			my_printf("%d %d\n",x,x+2);
		    num++;
		}
	}
	if(num==0)
	    my_printf("empty");
    return 0;
}