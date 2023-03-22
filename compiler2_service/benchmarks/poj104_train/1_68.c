#define NUM_ITER 2314

#include <header.h>


int f(int a,int b)
{
	if(a < b)
		return 0;
	int i,r =1 ;
	for(i = b; i <= a; i++ )
	{
		if( !(a%i) && i <= a/i )
		{
			r += f(a/i,i);
		}
	}
	return r;
}
int main_bench()
{
	int n,m;
	my_scanf("%d",&n);
	while(n--)
	{
		my_scanf("%d",&m);
		int result = f(m,2);
		my_printf("%d\n",result);
	}
}
