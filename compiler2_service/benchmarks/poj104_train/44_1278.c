#define NUM_ITER 359774

#include <header.h>

int reverse(int num)
{
	int i,k,l,m,ans;
	if (num<0) 
	{
		m=-1;
		num=0-num;
	}
	else m=1;
	k=0;
    while (num!=0)
	{
		k=k*10+num%10;
		num=(num-(num%10))/10;
	}
	ans=k*m;
	return ans;
}

int main_bench()
{
	int r,t;
	for (r=0;r<6;r++)
	{
		my_scanf("%d",&t);
		my_printf("%d\n",reverse(t));
	}
}