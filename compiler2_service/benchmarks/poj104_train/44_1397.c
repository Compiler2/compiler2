#define NUM_ITER 380927

#include <header.h>

int main_bench()
{int reverse(int num); 
int a[6],i;
for(i=0;i<6;i++)
my_scanf("%d",&a[i]);
for(i=0;i<6;i++)
{
while(a[i]%10==0)
{a[i]=a[i]/10;}
}
for(i=0;i<6;i++)
my_printf("%d\n",reverse(a[i]));
}
int reverse(int num)
{
	int s=0,p;
	for(;abs(num)>0;)
	{p=num%10;
	s=s*10+p;
	num=num/10;}
	return(s);}
	