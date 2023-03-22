#define NUM_ITER 2257

#include <header.h>

int sushu(int a)
{   int x=0;
	for(int i=2;i<a;i++)
	{
		if(a%i==0) x=1;
	}
	return x;
}
int main_bench()
{
	int n,i,a,b,x,y,s=0;
	my_scanf("%d",&n);
	if (n<5) my_printf("empty\n");
	for (i=3;i<=n-2;i++)
	{
		a=i;
		b=i+2;
		x=sushu(a);
		y=sushu(b);
		if (x+y==0)
		{
			my_printf("%d %d\n",a,b);
			s=1;
		}
		if(s==0) my_printf("empty");
	}
	return 0;
}
		