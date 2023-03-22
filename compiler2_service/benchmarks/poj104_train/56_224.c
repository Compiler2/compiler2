#define NUM_ITER 801922

#include <header.h>


	int main_bench()
{
	
	int a,b,c,d;
	void f(int x);
	my_scanf("%d%d%d%d",&a,&b,&c,&d);
	f(a);
	f(b);
	f(c);
	f(d);
	return 0;
}


void f(int x)
    {
	int y=0;
    while(x>9)
	{
      y=(y+x-x/10*10)*10;
      x/=10;
    }
	    y+=x;
    my_printf("%d\n",y);
	}