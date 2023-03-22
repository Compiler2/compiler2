#define NUM_ITER 407552

#include <header.h>



int reverse(int num); 
int branch(int e);
int main_bench()
{
	int A[6],i;
	for (i=0;i<6;i++)
	{
		my_scanf("%d",&A[i]);
	}
	for (i=0;i<6;i++)
	{
		int v=reverse(A[i]);
		my_printf("%d\n",v);
	}
	return 0;
}
int reverse(int num){
	int c;
	if (num == 0)
	{
		c=num;
	}
	if (num <0)
	{
		int d=abs(num);
		c= -branch(d);
	}
	if (num >0)
	{
		 c= branch(num);
	}
	return c;
}
int branch(int e){
	int reversenum=0,standard=e;
	for(;e>0;)
	{
		reversenum=10*reversenum+e%10;
		e=e/10;
	}
	return reversenum;
}
