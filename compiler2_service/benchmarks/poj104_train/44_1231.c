#define NUM_ITER 423579

#include <header.h>


int main_bench()
{int n,a(int num),s,i=0;
while(i<6)
{
	my_scanf("%d",&n);
	s=a(n);
	my_printf("%d\n",s);
	i++;
}
	return 0;
}

int a(int num)
{
	int x=0;
	while(num!=0)
	{
		x=x*10+num%10;
		num/=10;
	}
 return x;
}