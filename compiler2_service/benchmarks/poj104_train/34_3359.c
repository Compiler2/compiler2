#include <header.h>

int main_bench()
{
	int bb(int n);
    int n;
    my_scanf("%d",&n);
    bb(n);
}
int bb(int n)
{
	int m;
	if(n==1)
    my_printf("End");
    else
    {
    	if(n%2==0)
    	{
    		my_printf("%d/2=%d\n",n,m=n/2);
    	}
    	else
    	{
    		my_printf("%d*3+1=%d\n",n,m=n*3+1);
    	}
    	bb(m);
    }
}