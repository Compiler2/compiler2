#define NUM_ITER 384533

#include <header.h>

void revers(int x);
int main_bench()
{
 int a,i;
 for(i=0;i<6;i++)
 {
	 my_scanf("%d",&a);
	 if(a<0)
	 {a=-a;
	 my_printf("-");}
	 revers(a);
 }
 return 0;
}
void revers(int x)
{
	int start(int p);
	x=start(x);
	while(x!=0)
	{
		my_printf("%d",x%10);
		x=x/10;
	}
	my_printf("\n");
}
int start(int p)
{
	while(p%10==0)
	{
		p=p/10;
	}
	return p;
}
