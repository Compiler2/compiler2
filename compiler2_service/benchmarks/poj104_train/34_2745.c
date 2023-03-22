#define NUM_ITER 270093

#include <header.h>


int suan(int n)
{
	int temp;
	if(n==1)
	{
		my_printf("End");
	   return 0;
	   }
	if(n%2==1)
	{
		temp=n;
		n=n*3+1;
		my_printf("%d*3+1=%d\n",temp,n);
		return suan(n);
	}
	if(n%2==0)
	{
		temp=n;
		n=n/2;
		my_printf("%d/2=%d\n",temp,n);
		return suan(n);
	}
	
}
		


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	suan(n);
}
